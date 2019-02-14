#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "../Utilities/utility.h"

int binarySearch(void *arr, int n, void *e, size_t size, int (*comp)(void *a, void *b))
{
    int left = 0, right = n - 1, mid;
    int index = -1;
    int found = 0;
    while(!found && left <= right)
    {
        mid = left + (right-left)/2;
        if(comp(e, element_address(arr, size, mid)) < 0)
        {
            right = mid - 1;
        }
        else if(comp(e, element_address(arr, size, mid)) > 0)
        {
            left = mid + 1;
        }
        else
        {
            index = mid;
            found = 1;
        }
    }
    return index;
}

#endif //BINARYSEARCH_H
