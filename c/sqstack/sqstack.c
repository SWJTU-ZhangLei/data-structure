
#include <stdlib.h>
#include "sqstack.h"

int init_sqstack(SqStack *sqstack)
{
    sqstack.base = (SElemtype *)malloc(SQSTACK_INIT_SIZE * sizeof(SElemType))
    if (!sqstack.base) {
        return -1;
    }
    sqstack.top = sqstack.base;
    sqstack.size = SQSTACK_INIT_SIZE;
    return 0;
}
