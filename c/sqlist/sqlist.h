#ifndef _SQLIST_H_
#define _SQLIST_H_

#define SQLIST_SIZE 100

typdef int elemtype;

typedef struct {
    elemtype data;
    int cap;
    int len;
} SqList;

int init_sqlist(SqList *sqlist);


#endif //_SQLIST_H_
