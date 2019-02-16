#ifndef HEAPPERMUTATION_H
#define HEAPPERMUTATION_H

#include "../Utilities/utility.h"

void heapPermutation(void *arr, int n, int arrSize, size_t size,  
                     void (*print)(void *arr, int n))
{
   if(n == 1)
   {
      print(arr, arrSize);
      return;
   }
   int i;
   for(i = 0; i < n - 1; i++)
   {
      heapPermutation(arr, n - 1, arrSize, size, print);
      if(n % 2 == 0) swap(element_address(arr, size, i), element_address(arr, size, n - 1), size);
      else swap(element_address(arr, size, 0), element_address(arr, size, n - 1), size);
   }
   heapPermutation(arr, n - 1, arrSize, size, print);
}


/*
{1, 2, 3}


*/

#endif //HEAPPERMUTATION_H
