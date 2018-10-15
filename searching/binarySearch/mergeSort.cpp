// A program to illustrate merge sort written in cpp.
// You can simply run the code from the terminal(OSX and Ubuntu):
// $ g++ mergeSort.cpp -o output
// $ ./output
// then, the prompt will ask the number of elements and the elements themselves.

#include<iostream>
#include "mergeSort.h"
using namespace std;

// recursive algorithm to implement merge sort.
void mergeSort(int array[], int left, int right)
{
  if (left < right)
  {
    int middle = left + (right - left)/2 ;
    mergeSort(array, left, middle);
    mergeSort(array, middle+1, right);

    merge(array, left, middle, right);
  }

}


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
