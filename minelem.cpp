#include "minelem.h"

int minelem(int *arr, int size)
{
 int min = arr[0];

 for(int i = 0; i < size; ++i)
 {
     if(arr[i] < min)
     {
         min = arr[i];
     }
 }

 return min;
}
