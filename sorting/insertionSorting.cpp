// A program to illustrate insertion sorting written in cpp.
// You can simply run the code from the terminal(OSX and Ubuntu):
// $ g++ insertionSorting.cpp -o output
// $ ./output
// then, the prompt will ask the number of elements and the elements themselves.

#include<iostream>
using namespace std;


int main() {

  // Taking the size of array as input.
  int length;
  cout<<"\nEnter the length of your array : ";
  cin>>length;

  // Taking the elements of the array as input.
  int arr[length];
  cout<<"\nEnter  the numbers you want to insert into your array:\n";
  for(int i=0; i < length; i++)
  {
    cin>>arr[i];
  }

  // Sorting Operation Begins.
  for(int i = 1; i < length; i++)                         // go from the second element through the end of array.
  {
    int temp = arr[i];                              // selecting the first unsorted element.
    int j = i - 1;
    while(j >= 0 && temp < arr[j])
    {                                               // this while loop shifts all the elements to
      arr[j+1] = arr[j];                                  // right to open the position for unsorted element.
      j = j - 1;
    }
    arr[j + 1] = temp;                              // inserting the unsorted element to its correct position.
  }

  cout<<"\n Sorting Operation Completed!\n The sorted array is : \n";
  for(int k=0; k < length; k++)
  {
    cout<< arr[k] << "\n";
  }

  return 0;
}
