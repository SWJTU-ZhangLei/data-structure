#include <stdio.h>
#include "slinklist.h"

int init_slinklist(SLinkList* slinklist)
{
    for (int i = 0; i < SLINKLIST_MAX_SIZE; i++) {
        (*slinklist)[i].cur = i + 1;
        (*slinklist)[i].data = '*';
    }
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
