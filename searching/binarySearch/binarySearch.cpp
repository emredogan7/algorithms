

// this code illustrates the binary search algortihm.
// To run the code from the terminal (OSX or Linux),
// change your directory and type the commands:
// $ g++ binarySearch.cpp -o output
// $ ./output


#include <iostream>
#include "mergeSort.h"
// #include <"merge.h">
using namespace std;

bool isSorted(const int *ar, int size) {

    if (size == 0)
        return true;   // Edge case

    int previous_value= *ar;

    while (size)
    {
       if (*ar < previous_value)
             return false;
       previous_value= *ar;

       ++ar;
       --size;
     }
     return true;
}



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



    if (isSorted(arr, length) == 0)
    {
        cout <<"\n"<< "Your array is not a sorted one. Let me sort it for you \n";
        cout << "\n" << "Sorting by Merge Sort...\n";
        mergeSort(arr, 0, length-1);


        cout << "Sorting is completed:\n";
        for (int i=0; i < length; i++)
        {
          cout << arr[i] << "\t";
        }
        cout << "\n";




    }

    return 0;
}
