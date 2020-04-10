#include <stdlib.h>
#include "sqlist.h"


int init_sqlist(SqList* sqlist)
{
    sqlist->base = (elemtype *)malloc(SQLIST_SIZE * sizeof(elemtype));
    if (!sqlist->base) {
        return -1;
    }
    sqlist->cap = SQLIST_SIZE;
    sqlist->len = 0;
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

