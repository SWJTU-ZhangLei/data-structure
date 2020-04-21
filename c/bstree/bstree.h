#ifndef _BSTREE_H_
#define _BSTREE_H_

typedef int TElemType;

typedef struct BSTNode{
    TElemType data;
    int bf; //balancer factor
    BSTNode *lchild, *rchild;
}BSTNode, *BSTree;


#endif //_BSTREE_H_
