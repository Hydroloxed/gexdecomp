#ifndef LISTAPI_H
#define LISTAPI_H

struct NodeType
{
    struct NodeType* nd_next; // 00
    struct NodeType* nd_prev; // 04
    // 08
};

struct ListType
{
    struct NodeType* lst_head; // 00
    struct NodeType* lst_tail; // 04
    struct NodeType* lst_tailPred; // 08
    // 0C
};

void LST_InsertBefore(struct NodeType* oldnode, struct NodeType* newnode);
void LST_InsertAfter(struct NodeType* oldnode, struct NodeType* newnode);
void LST_Remove(struct NodeType* node);
void LST_AddTail(struct ListType* eelist, struct NodeType* node);
struct  NodeType* LST_RemTail(struct ListType* eelist);
void LST_Init(struct ListType* eelist);

#endif
