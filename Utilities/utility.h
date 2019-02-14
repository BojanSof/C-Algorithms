#ifndef UTILITY_H
#define UTILITY_H

#include <time.h>
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
    memmove(b, t, size);
}

int randNum(int a, int b)
{
    if(a > b) return randNum(b, a);
    
    static int firstCall = 1;
    if(firstCall)
    {
        srand(time(NULL));
        firstCall = 0;
    }
    return rand() % (b - a + 1) + a;
}

#endif //UTILITY_H
