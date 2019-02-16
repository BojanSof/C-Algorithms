#ifndef INTERPOLATIONSEARCH_H
#define INTERPOLATIONSEARCH_H

#include "../Utilities/utility.h"

int interpolationSearchRange(int *arr, int l, int r, int e)
{
   int p;
   int index = -1;
   int found = 0;
   while(l <= r && !found && (arr[l] <= e && arr[r] >= e))
   {
      p = l + (e - arr[l]) * (r - l) / (arr[r] - arr[l]);
      if(e < arr[p])
      {
         r = p - 1;
      }
      else if(e > arr[p])
      {
         l = p + 1;
      }
      else
      {
         index = p;
         found = 1;
      }
   }
   return index;
}

int interpolationSearch(int *arr, int n, int e)
{
    return interpolationSearchRange(arr, 0, n - 1, e);
}

#endif //INTERPOLATIONSEARCH_H
