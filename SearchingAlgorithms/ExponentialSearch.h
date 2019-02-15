#ifndef EXPONENTIALSEARCH_H
#define EXPONENTIALSEARCH_H

#include "BinarySearch.h"

int exponentialSearch(void *arr, int n, void *e, size_t size, int (*comp)(void *a, void *b))
{
   int index = -1;
   if(comp(element_address(arr, size, 0), e) == 0)
   {
      index = 0;
   }
   else
   {
      int l = 1;
      while(l < n && (comp(element_address(arr, size, l), e) < 0))
      {
         l *= 2;
      }
      index = binarySearchRange(arr, l/2, min(l, n - 1), e, size, comp);
   }
   return index;
}

#endif //EXPONENTIALSEARCH_H
