#include "listapi.h"
#include <stdlib.h>

// 0042cbb0 https://decomp.me/scratch/ADWau 92.5% (regs are off)
void LST_InsertBefore(struct NodeType* oldnode, struct NodeType* newnode)
{
    struct NodeType* temp;

    temp = oldnode->nd_prev;
    newnode->nd_prev = temp;
    newnode->nd_next = oldnode;
    temp->nd_next = newnode;
    oldnode->nd_prev = newnode;
}

// 0042cbd0 https://decomp.me/scratch/Ya77s 100%
void LST_InsertAfter(struct NodeType* oldnode, struct NodeType* newnode)
{
    struct NodeType* temp;

    temp = oldnode->nd_next;
    newnode->nd_prev = oldnode;
    newnode->nd_next = temp;
    temp->nd_prev = newnode;
    oldnode->nd_next = newnode;
}

// 0042cbf0 https://decomp.me/scratch/Puv1V 100%
void LST_Remove(struct NodeType* node)
{
    struct NodeType* prev = node->nd_prev;
    struct NodeType* next = node->nd_next;

    prev->nd_next = next;
    next->nd_prev = prev;
}


// 0042cc00 https://decomp.me/scratch/cAX22 100%
void LST_AddTail(struct ListType* eelist, struct NodeType* node)
{
    LST_InsertBefore((struct NodeType*)&eelist->lst_tail, node);
}

// 0042cc20 https://decomp.me/scratch/lQ8wq 100%
struct NodeType* LST_RemTail(struct ListType* eelist)
{
    struct NodeType* node;

    node = eelist->lst_tailPred;
    if(node->nd_prev != NULL)
    {
        LST_Remove(node);
    }
    else
    {
        node = NULL;
    }
    return node;
}

// 0042cc50 https://decomp.me/scratch/vxChi 100%
void LST_Init(struct ListType* eelist)
{
    eelist->lst_head = (struct NodeType*)&eelist->lst_tail;
    eelist->lst_tail = NULL;
    eelist->lst_tailPred = (struct NodeType*)&eelist->lst_head;
}
