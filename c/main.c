#include <stdio.h>
#include <slinklist.h>

int main(int argc, char* argv[])
{
    int ret;

    printf("Welcome to data-structue.\n");
    printf("SqList:\n");

    SLinkList slinklist;
    ret = init_slinklist(&slinklist);
    print_slinklist(&slinklist);
    return 0;
}
