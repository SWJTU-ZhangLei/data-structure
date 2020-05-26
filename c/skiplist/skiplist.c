#include <stdlib.h
#include "skiplist.h"

static int __create_skiplist_node()
{


}


int init_skiplist(SkipList *skiplist, int max_level)
{
    skiplist = (SkipList *)malloc(sizeof(SkipList))
    if (!skiplist) {
        return -1;
    
    skiplist->level = 1;
    skiplist->num = 0;
    skiplist>head = NULL;

    return 0
}
