#include<iostream>
#include "merge.h"

void merge(int array[], int left, int middle, int right)
{
  int i, j, k;                                        // defining the cursors to travel through arrays.
                                                      // defining the sizes of sub arrays.
  int sizeLeft = middle - left + 1;
  int sizeRight = right - middle;

  int LeftArray[sizeLeft], RightArray[sizeRight];
                                                      // initializing the values of sub arrays.
  for (i = 0; i < sizeLeft; i++)
  {
    LeftArray[i] = array[left + i];
  }

  for (j = 0; j < sizeRight; j++)
  {
    RightArray[j] = array[middle + j + 1];
  }

  i = j = 0;
  k = left;
  // let these cursors move through the subarrays and choose the smallest element.
  while ((i < sizeLeft) && (j < sizeRight))
  {

    if (LeftArray[i] <= RightArray[j])
    {
      array[k] = LeftArray[i];
      i++;
    }
    else
    {
      array[k] = RightArray[j];
      j++;
    }
    k++;
  }
  // if one of the subarrays is empty, then take the other one.
  while (i < sizeLeft)
  {
    array[k] = LeftArray[i];
    i++;
    k++;
  }

  while (j < sizeRight)
  {
    array[k] = RightArray[j];
    j++;
    k++;
  }

}
