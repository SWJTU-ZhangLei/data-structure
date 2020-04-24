#ifndef _SLINKLIST_H_
#define _SLINKLIST_H_

#define SLINKLIST_MAX_SIZE 1000

typedef char ElemType;

typedef struct {
    int cur;
    ElemType data;
} Component, SLinkList[SLINKLIST_MAX_SIZE];

#endif //_SLINKLIST_H_
