import glob
import re

c_files = glob.glob("src/**/*.c", recursive=True)

FUN_PATTERN = r"// ([0-9a-f]{8})$"
FUN_WITH_MATCH_PATTERN = r"// ([0-9a-f]{8}) https://decomp.me/scratch/([a-zA-Z0-9]+) ([0-9.]+)%$"

funs = []

for file in c_files:
    with open(file, "r") as f:
        text = f.read()
        lines = text.splitlines()
        for idx, l in enumerate(lines):
            addr = 0
            name = ""
            percent = 0.0
            scratch = ""
            fun_with_match = re.match(FUN_WITH_MATCH_PATTERN, l)
            if fun_with_match:
                addr = int(fun_with_match.group(1), 16)
                scratch = fun_with_match.group(2)
                percent = float(fun_with_match.group(3))
            else:
                fun = re.match(FUN_PATTERN, l)
                if fun:
                    addr = int(fun.group(1), 16)
            if idx != len(lines) - 1:
                # Find the function name by finding the '(' and searching backwards
                # until we find a ' ':
                # static uint8* SCRIPT_CelToQuad(uint8* data, struct GXObject* gob)
                #              <----------------^
                arguments_start = lines[idx + 1].find('(')
                if arguments_start != -1:
                    fn_name_begin = lines[idx + 1].rfind(' ', 0, arguments_start)
                    name = lines[idx + 1][fn_name_begin:arguments_start]
            if addr != 0:
                funs.append((addr, name, scratch, percent, file))

for addr, name, scratch, percent, file in sorted(funs, key=lambda x: x[0]):
    print("{:08x} {:4.0f}% {} {}".format(addr, percent, file, name))

total_match = sum(x for _,_,_,x,_ in funs)
no_with_match = sum(x != 0 for _,_,_,x,_ in funs)
print("{:3.2f}% done".format(total_match / len(funs)))
print("{}/{} functions partially or fully matched".format(no_with_match, len(funs)))
