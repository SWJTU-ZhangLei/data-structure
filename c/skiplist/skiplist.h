#ifndef _SKIPLIST_H_

#define _SKIPLIST_H_

#define MAX_LEVEL 16

typedef char SLElemType;

typedef struct SLNode {
    SLElemType value;
    int max_level;
    SLNode *next[MAX_LEVEL];
} SLNode;

typedef struct SkipList {
    int level;
    int count;
    SLNode *head;
} SkipList;

int init_skiplist(int max_level);


#endif //_SKIPLIST_H
