#ifndef _SQLIST_H_
#define _SQLIST_H_

#define SQLIST_SIZE 1000

typedef int elemtype;

typedef struct {
    elemtype *base;
    int cap;
    int len;
} SqList;

int init_sqlist(SqList *sqlist);
void clear_sqlist(SqList* sqlist);
int insert_sqlist(SqList *sqlist, int i, elemtype elem);
int delete_sqlist(SqList *sqlist, int i);
int locate_sqlist(SqList *sqlist, int i);

#endif //_SQLIST_H_
