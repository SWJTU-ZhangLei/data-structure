#include <stdio.h>
#include <slinklist.h>

int main(int argc, char* argv[])
{
    printf("Welcome to data-structue.\n");
    SLinkList slinklist;
    init_slinklist(&slinklist);
    print_slinklist(&slinklist);
    return 0;
}
