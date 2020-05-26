#include <stdlib.h>
#include "sqlist.h"

int init_sqlist(SqList* sqlist)
{
    sqlist->base = (ElemType *)malloc(SQLIST_SIZE * sizeof(ElemType));
    if (!sqlist->base) {
        return -1;
    }
    sqlist->cap = SQLIST_SIZE;
    sqlist->len = 0;
    return 0;
}

int insert_sqlist(Sqlist* sqlist, int i, ElemType e)
{
    if (i < 1 && i > (sqlist->len + 1)) {
        return -1;
    }
    
    if (sqlist->len >= sqlist->cap) {
        newbase = (ElemType *)realloc(sqlist->base, (sqlist->len + SQLIST_INCREMENT) * sizeof(ElemType));
        if (!newbase) {
            exit(1);
        } else {
            sqlist->base = newbase;
        }
    }
    
    
    for (int j = sqlist->len ; j >= i; j--) {
        *(newbase + j + 1) = *(newbase+ j);
    }

    *(newbase + i) = e;

    return 0;
}

void clear_sqlist(SqList* sqlist)
{
    if (sqlist->base) {
        free(sqlist->base);
    }
    sqlist->cap = 0;
    sqlist->len = 0;
}

