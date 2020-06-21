#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

int init_sqlist(SqList* sqlist)
{
    sqlist->base = (SqListElemType *)malloc(SQLIST_SIZE * sizeof(SqListElemType));
    if (!sqlist->base) {
        exit(1);
    }
    sqlist->cap = SQLIST_SIZE;
    sqlist->len = 0;
    return 0;
}

int insert_sqlist(SqList* sqlist, int i, SqListElemType e)
{
    SqListElemType *newbase;
    if (i < 1 && i > (sqlist->len + 1)) {
        return -1;
    }
    if (sqlist->len >= sqlist->cap) {
        newbase = (SqListElemType *)realloc(sqlist->base, (sqlist->len + SQLIST_INCREMENT) * sizeof(SqListElemType));
        if (!newbase) {
            exit(1);
        } else {
            sqlist->base = newbase;
            sqlist->cap += SQLIST_INCREMENT;
        }
    }

    for (int j = sqlist->len; j >= i - 1; j--) {
        *(sqlist->base + j + 1) = *(sqlist->base + j);
    }

    *(sqlist->base + i - 1) = e;
    sqlist->len += 1;

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

void print_sqlist(SqList* sqlist)
{
    for (int i = 0; i < sqlist->len; i++) {
        printf("%05d  ", *(sqlist->base + i));
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}