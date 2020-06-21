#ifndef _BITREE_H_
#define _BITREE_H_

typedef int TElemType;
typedef struct BiNode {
    struct BiNode *lchild;
    struct BiNode *rchild;
    TElemType data;
} *BiTree;

#endif //_BITREE_H_
