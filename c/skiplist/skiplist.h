#ifndef _SKIPLIST_H_

#define _SKIPLIST_H_

typedef char SLElemType;

typedef struct SLNode {
    SLElemType value;
    int max_level;
    SLNode *next[];
} SLNode;

typedef struct SkipList {
    int level;
    int num;
    SLNode *head;
} SkipList;


#endif //_SKIPLIST_H
