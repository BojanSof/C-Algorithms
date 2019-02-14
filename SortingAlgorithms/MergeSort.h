#ifndef MERGESORT_H
#define MERGESORT_H

#include "../Utilities/utility.h"

void merge(void *arr, int l, int m, int r, size_t size, int (*comp)(void *a, void *b))
{
    int i, j, k;
    void *leftArr, *rightArr;
    int n1 = m - l + 1;
    int n2 = r - m;
    leftArr = (void*)malloc(size * n1);
    rightArr = (void*)malloc(size * n2);
    for(i = 0; i < n1; i++)
    {
        memmove(element_address(leftArr, size, i), element_address(arr, size, l + i), size);
        j++;
    }
    for(i = 0; i < n2; i++)
    {
        memmove(element_address(rightArr, size, i), element_address(arr, size, m + 1 + i), size);
        j++;
    }
            i = j = 0;
    k = l;
    while(i < n1 && j < n2)
    {
        if(comp(element_address(leftArr, size, i), element_address(rightArr, size, j)))
        {
            memmove(element_address(arr, size, k), element_address(leftArr, size, i), size);
            i++;
        }
        else
        {
            memmove(element_address(arr, size, k), element_address(rightArr, size, j), size);
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        memmove(element_address(arr, size, k), element_address(leftArr, size, i), size);
        i++;
        k++;
    }
    while(j < n2)
    {
        memmove(element_address(arr, size, k), element_address(rightArr, size, j), size);
        j++;
        k++;
    }
    free(leftArr);
    free(rightArr);
}
void mergeSort(void *arr, int l, int r, size_t size, int (*comp)(void *a, void *b))
{
    if(l < r)
    {
        int m = l + (r-l)/2;
        mergeSort(arr, l, m, size, comp);
        mergeSort(arr, m + 1, r, size, comp);
        merge(arr, l, m, r, size, comp);
    }
}

#endif //MERGESORT_H
