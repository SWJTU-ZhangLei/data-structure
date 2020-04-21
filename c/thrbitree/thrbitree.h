#ifndef _THRBITREE_H_

#define _THRBITREE_H_

typdef int TElemType;

typedef enum PointerTag { Link, Thread }; // Link 0, Thread 1

typedef struct ThrBiTreeNode {
    TElemType data;
    ThrBiTreeNode *lchild, *rchild;    
    PointerTag ltag, rtag;
} ThrBiTreeNode, *ThrBiTree;

#endif //_THRBITREE_H_
