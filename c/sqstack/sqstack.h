#ifndef _SQSTACK_H_
#define _SQSTACK_H_

#define SQSTACK_INIT_SIZE 100
#define SQSTACK_INCREAMENT 10

typedef int SElemType;

typedef struct {
    SElemType *base;
    SElemType *top;
    int size;
} SqStack;

int init_sqstack(SqStack *sqstack);


#endif //__SQSTACK_H_
