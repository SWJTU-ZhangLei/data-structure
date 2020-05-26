#include <stdio.h>
#include "slinklist.h"

int init_slinklist(SLinkList* slinklist)
{
    for (int i = 0; i < SLINKLIST_MAX_SIZE; i++) {
        (*slinklist)[i].cur = i + 1;
        (*slinklist)[i].data = '*';
    }
}

int malloc_slinklist(SLinkList* slinklist)
{
    int i = (*slinklist)[0].cur;
    if (i <= 0) {
        return -1;
    }
    return i;
}

int free_slinklist(SLinkList* slinklist, int k)
{
    if (k <= 0 || k > SLINKLIST_MAX_SIZE) {
        return -1;
    }

    (*slinklist)[k].cur =  (*slinklist)[0].cur;
    (*slinklist)[0].cur = k;

    return 0;
}

void print_slinklist(SLinkList* slinklist)
{
    for (int i = 0; i < SLINKLIST_MAX_SIZE; i++) {
        printf("%5d: %5c", (*slinklist)[i].cur, (*slinklist)[i].data);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}
