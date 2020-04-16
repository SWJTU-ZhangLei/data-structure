#ifndef _LINKLIST_H_
#define _LINKLIST_H_

typedef int elemtype;

typedef struct LNode {
    elemtype data;
    struct LNode *next;
}LNode, *LinkList;

int insert_linklist(LinkList linklist



#endif //_LINKLIST_H_
