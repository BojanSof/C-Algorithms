#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "../Utilities/utility.h"

void bubbleSort(void *arr, int n, size_t size, int (*comp)(void *a, void *b))
{
    int i, j;
    for(i = n - 1; i >= 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(comp(element_address(arr, size, j), element_address(arr, size, j + 1)))
            {
                swap(element_address(arr, size, j), element_address(arr, size, j + 1), size);
            }
        }
    }
}

#endif //BUBBLESORT_H
