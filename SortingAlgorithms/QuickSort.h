#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "utility.h"

int partition(void *arr, int l, int r, size_t size, int (*comp)(void* a, void *b))
{
    int i, j;
    for(i = l, j = l - 1; i <= r - 1; i++)
    {
        if(comp(element_address(arr, size, i), element_address(arr, size, r)))
        {
            j++;
            swap(element_address(arr, size, i), element_address(arr, size, j), size);
        }
    }
    j = j + 1;
    swap(element_address(arr, size, j), element_address(arr, size, r), size);
    return j;
}

int randomPivot(void *arr, int l, int r, size_t size, int (*comp)(void* a, void *b))
{
    int pivot_index = randNum(l, r);
    swap(element_address(arr, size, pivot_index), element_address(arr, size, r), size);
    return partition(arr, l, r, size, comp);
}

void quickSort(void *arr, int l, int r, size_t size, int (*comp)(void* a, void *b))
{
    if(l < r)
    {
        int pivot = randomPivot(arr, l, r, size, comp);
        quickSort(arr, l, pivot - 1, size, comp);
        quickSort(arr, pivot + 1, r, size, comp);
    }
}

#endif //QUICKSORT
