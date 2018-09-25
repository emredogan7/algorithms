// A program to illustrate selection sorting written in cpp.
// You can simply run the code from the terminal(OSX and Ubuntu):
// $ g++ selectionSorting.cpp -o output
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
  for (int i = 0; i < length; i++)                                              //The outer loop travels through all the array.
  {
    int smallest = i;                                                           //smallest variable represents lastly located sorted element.

    for (int j = i + 1; j < length; j++)                                        //traveling through unordered tail of the array
    {
      if(arr[j] < arr[smallest])
      {
        smallest = j;                                                           //comparing all the elements of unordered tail with lastly added ordered element.
      }
      // Swapping Operation
      int temp = arr[i];
  		arr[i] = arr[smallest];
  		arr[smallest] = temp;

    }
  }

  cout<<"\n Sorting Operation Completed!\n The sorted array is : \n";
  for(int k=0; k<length; k++)
  {
    cout<< arr[k] << "\n";
  }

  return 0;
}
