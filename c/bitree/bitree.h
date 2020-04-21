#ifndef _BITREE_H_
#define _BITREE_H_

typedef int TElemType;
typedef struct BiNode {
    TElemType data;
    struct BiNode lchild;
    struct BiNode rchild;
} *BiTree;

#endif //_BITREE_H_
