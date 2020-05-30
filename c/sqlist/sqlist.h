#ifndef _SQLIST_H_
#define _SQLIST_H_

#define SQLIST_SIZE 1000
#define SQLIST_INCREMENT 10

typedef int ElemType;

typedef struct {
    ElemType *base;
    int cap;
    int len;
} SqList;

int init_sqlist(SqList *sqlist);

int insert_sqlist(SqList *sqlist, int i, ElemType elem);

int delete_sqlist(SqList *sqlist, int i);

int locate_sqlist(SqList *sqlist, int i);

void clear_sqlist(SqList* sqlist);

#endif //_SQLIST_H_
