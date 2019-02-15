#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "../Utilities/utility.h"

int binarySearchRange(void *arr, int l, int r, void *e, size_t size, int (*comp)(void *a, void *b))
{
    int mid;
    int index = -1;
    int found = 0;
    while(!found && l <= r)
    {
        mid = l + (r-l)/2;
        if(comp(e, element_address(arr, size, mid)) < 0)
        {
            r = mid - 1;
        }
        else if(comp(e, element_address(arr, size, mid)) > 0)
        {
            l = mid + 1;
        }
        else
        {
            index = mid;
            found = 1;
        }
    }
    return index;
}

int binarySearch(void *arr, int n, void *e, size_t size, int (*comp)(void *a, void *b))
{
    return binarySearchRange(arr, 0, n-1, e, size, comp);
}


#endif //BINARYSEARCH_H
