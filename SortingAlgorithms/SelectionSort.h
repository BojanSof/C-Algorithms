#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "../Utilities/utility.h"

void selectionSort(void *arr, int n, size_t size, int (*comp)(void *a, void *b))
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(!comp(element_address(arr, size, i), element_address(arr, size, j)))
            {
                swap(element_address(arr, size, i), element_address(arr, size, j), size);
            }
        }
    }
}

#endif //SELECTIONSORT_H
