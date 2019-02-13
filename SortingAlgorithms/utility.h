#ifndef UTILITY_H
#define UTILITY_H

#include <stdlib.h>
#include <string.h>

void* element_address(void *arr, size_t size, unsigned int index)
{
    return (arr + size * index);
}

void swap(void *a, void *b, size_t size)
{
    void *t = malloc(size);
    memmove(t, a, size);
    memmove(a, b, size);
    memmove(b, a, size);
}

int compInt(void *a, void *b)
{
    if(*(int*)a < *(int*)b) return 1;
    else return 0;
}

int compFloat(void *a, void *b)
{
    if(*(float*)a < *(float*)b) return 1;
    else return 0;
}

int compDouble(void *a, void *b)
{
    if(*(double*)a < *(double*)b) return 1;
    else return 0;
}

int compChar(void *a, void *b)
{
    if(*(char*)a < *(char*)b) return 1;
    else return 0;
}

#endif //UTILITY_H
