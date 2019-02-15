#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "../Utilities/utility.h"

void insertionSort(void *arr, int n, size_t size, int (*comp)(void *a, void *b))
{
    int i, j;
    void *key = malloc(size);
    for(i = 1; i < n; i++)
    {
        memcpy(key, element_address(arr, size, i), size);
        for(j = i - 1; j >= 0 && !comp(element_address(arr, size, j), key); j--)
        {
            memcpy(element_address(arr, size, j + 1), element_address(arr, size, j), size);
        }
        memcpy(element_address(arr, size, j + 1), key, size);
    }
}

#endif //INSERTIONSORT_H
