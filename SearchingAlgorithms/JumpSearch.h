#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H

#include "../Utilities/utility.h"

int jumpSearch(void *arr, int n, void *e, size_t size, int (*comp)(void *a, void *b))
{
    const int block = sqrt(n);
    int l = 0;
    int r = block;
    int index = -1;
    while(comp(element_address(arr, size, min(r, n-1)), e) < 0)
    {
        l = r;
        r += block;
        if(r >= n)
        {
            return index;
        }
    }
    int i;
    for(i = l; i <= r; i++)
    {
        if(comp(element_address(arr, size, i), e) == 0)
        {
            index = i;
        }
    }
    return index;
}

#endif //JUMPSEARCH_H
