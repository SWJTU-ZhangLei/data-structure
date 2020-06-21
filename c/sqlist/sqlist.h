#ifndef _SQLIST_H_
#define _SQLIST_H_

#define SQLIST_SIZE 1000
#define SQLIST_INCREMENT 10

typedef int SqListElemType;

typedef struct {
    int cap;
    int len;
    SqListElemType *base;
} SqList;

int init_sqlist(SqList *sqlist);

int insert_sqlist(SqList *sqlist, int i, SqListElemType elem);

int delete_sqlist(SqList *sqlist, int i);

int locate_sqlist(SqList *sqlist, int i);

void clear_sqlist(SqList* sqlist);

void print_sqlist(SqList* sqlist);

#endif //_SQLIST_H_
