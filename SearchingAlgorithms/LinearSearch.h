#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "../Utilities/utility.h"

int linearSearch(void *arr, int n, void *e, size_t size, int (*comp)(void *a, void *b))
{
    int index = -1;
    int found = 0;
    int i;
    for(i = 0; i < n && !found; i++)
    {
        if(comp(e, element_address(arr, size, i)) == 0)
        {
            index = i;
            found = 1;
        }
    }
    return index;
}

#endif //LINEARSEARCH_H

