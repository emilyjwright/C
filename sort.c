// ***
// *** You MUST modify this file, only the ssort function
// ***

#include "sort.h"
#include <stdio.h>

// DO NOT MODIFY THIS FUNCTION
bool checkOrder(int * arr, int size)
// a static function is visible only in this file
// This function returns true if the array elements are
// in the ascending order.
// false, otherwise
{
  int ind;
  for (ind = 0; ind < (size - 1); ind ++)
    {
      if (arr[ind] > arr[ind + 1])
        {
          return false;
        }
    }
  return true;
}


// YOU MUST MODIFY THIS FUNCTION
#ifdef TEST_SORT
void ssort(int * arr, int size)
{

  int i; //counter
  int j; //index reference variable

  for (i = 0; i < size - 1; i++) //references the first element to be compared
  {
   for (j = i + 1; j < size; j++) //referencs the second element to be compared
   {
    if (arr[i] > arr[j]) //compares the two elements
    {
     int swap;        //swaps the elements if they are not in ascending order
     swap = arr[i];
     arr[i] = arr[j];
     arr[j] = swap;
    }
   }
}
  // This function has two levels of for
  // The first level specifies which element in the array
  // The second level finds the smallest element among the unsorted
  // elements

  // After finding the smallest element among the unsorted elements,
  // swap it with the element of the index from the first level
}
#endif
