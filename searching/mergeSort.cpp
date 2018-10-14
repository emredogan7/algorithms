// A program to illustrate merge sort written in cpp.
// You can simply run the code from the terminal(OSX and Ubuntu):
// $ g++ mergeSort.cpp -o output
// $ ./output
// then, the prompt will ask the number of elements and the elements themselves.

#include<iostream>
#include "mergeSort.h"
#include "merge.h"
using namespace std;

// recursive algorithm to implement merge sort.
int mergeSort(int &array[], int left, int right)
{
  if (left < right)
  {
    int middle = left + (right - left)/2 ;
    mergeSort(array, left, middle);
    mergeSort(array, middle+1, right);

    merge(array, left, middle, right);
  }

  return array;
}
