#ifndef MERGESORT_H
#define MERGESORT_H

#include "utility.h"

void merge(void *arr, unsigned int l, unsigned int m, unsigned int r, size_t size, int (*comp)(void *a, void *b))
{
    unsigned int i, j, k;
    void *leftArr, *rightArr;
    unsigned int n1 = m - l + 1;
    unsigned int n2 = r - m;
    leftArr = (void*)malloc(size * n1);
    rightArr = (void*)malloc(size * n2);
    for(i = 0; i < n1; i++)
    {
        memcpy(element_address(leftArr, size, i), element_address(arr, size, l + i), size);
        j++;
    }
    for(i = 0; i < n2; i++)
    {
        memcpy(element_address(rightArr, size, i), element_address(arr, size, m + 1 + i), size);
        j++;
    }
            i = j = 0;
    k = l;
    while(i < n1 && j < n2)
    {
        if(comp(element_address(leftArr, size, i), element_address(rightArr, size, j)))
        {
            memcpy(element_address(arr, size, k), element_address(leftArr, size, i), size);
            i++;
        }
        else
        {
            memcpy(element_address(arr, size, k), element_address(rightArr, size, j), size);
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        memcpy(element_address(arr, size, k), element_address(leftArr, size, i), size);
        i++;
        k++;
    }
    while(j < n2)
    {
        memcpy(element_address(arr, size, k), element_address(rightArr, size, j), size);
        j++;
        k++;
    }
    /*
    for(i = 0; i < n1; i++)
    {
        memcpy((leftArr + (i*size)), (arr + ((l + i)*size)), size);
        j++;
    }
    for(i = 0; i < n2; i++)
    {
        memcpy((rightArr + (i*size)), (arr + ((m + 1 + i)*size)), size);
        j++;
    }
    
    i = j = 0;
    k = l;
    
    while(i < n1 && j < n2)
    {
        if(comp((leftArr + (i*size)), (rightArr + (j*size))))
        {
            memcpy((arr + (k*size)), (leftArr + (i*size)), size);
            i++;
        }
        else
        {
            memcpy((arr + (k*size)), (rightArr + (j*size)), size);
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        memcpy((arr + (k*size)), (leftArr + (i*size)), size);
        i++;
        k++;
    }
    while(j < n2)
    {
        memcpy((arr + (k*size)), (rightArr + (j*size)), size);
        j++;
        k++;
    }
    */
    free(leftArr);
    free(rightArr);
}
void mergeSort(void *arr, unsigned int l, unsigned int r, size_t size, int (*comp)(void *a, void *b))
{
    if(l < r)
    {
        unsigned int m = l + (r-l)/2;
        mergeSort(arr, l, m, size, comp);
        mergeSort(arr, m + 1, r, size, comp);
        merge(arr, l, m, r, size, comp);
    }
}

#endif //MERGESORT_H
