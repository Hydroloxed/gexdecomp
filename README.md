# gexdecomp

A decompilation of Gex (1996) for Windows. The project is still in an early state;
please feel free to open a PR if you want to contribute.

## Development

The development workflow is essentially:
 - Find a function to decompile
 - Look at it in Ghidra
 - Export the disassembly
 - Paste the disassembly into [decomp.me](https://decomp.me)
 - Iterate on the disassembly until reaching (close to) 100%

### Disassembling a function

We use [unassemblize](https://github.com/OmniBlade/unassemblize) to generate assemblable disassembly.

Using `LST_Init()` as an example function:
```bash
GEX_EXE=~/Games/Gex/GEX.exe
./unassemblize -s 0042cc50 -e 0042cc63 $GEX_EXE && cat program.S | sed -r "s@unk_([0-9a-f]+)@0x\1@p" | sed -r s@sub_@_sub_@g | sed -r s@off_@_off_@g
```
Note that `unassemblize` expects the end address to be the last instruction.
This is unlike `objdump`, which expects the end address to be one past the end.

### Creating a decomp.me scratch

Create a new scratch on [decomp.me](https://decomp.me) and:
 - Select "Windows (9x/NT)"
 - Under "Compiler", select "Microsoft Visual C/C++ 4.0"
 - Paste the disassembly into the "Target assembly" section.
 - Under "Context", paste in [GEX.H](https://gitlab.com/Hydrolox/gexcommon/-/blob/main/GEX.H?ref_type=heads).
   (In the future, this should be generated automatically from the project headers.)
 - Click "Create scratch"!
