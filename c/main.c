#include <stdio.h>
#include "sqlist.h"
#include "slinklist.h"


int main(int argc, char* argv[])
{
    int ret;

    printf("Welcome to data-structue.\n");
    printf("SqList Demo:\n");

    SqList sqlist;
    ret = init_sqlist(&sqlist);
    for (int i = 1; i <= 1000; i++) {
        insert_sqlist(&sqlist, i, 2 * i);
    }
    print_sqlist(&sqlist);


    //SLinkList slinklist;
    //ret = init_slinklist(&slinklist);
    //print_slinklist(&slinklist);
    return 0;
}
