#include "binary_search.h"

int *binary_search(const int value, const int *arr, const size_t len)
{
   if (0 == len || NULL == arr) {
      return NULL;
   }
   const int *low = arr;
   const int *high = arr + len-1;
   while (low <= high) {
      const int *mid = low + (high - low) / 2;
      if (*mid > value) {
         high = mid - 1;
      } else if (*mid < value) {
         low = mid + 1;
      } else {
         return (int *)mid;
      }
   }
   return NULL;
}

