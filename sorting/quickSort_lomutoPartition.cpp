
#include<iostream>
#include<algorithm>                             //for swap() function.

using namespace std;

template <class T>                              // generating template for generic use.
T lomutoPartition(T arr[], int p, int r){
    T pivot = arr[r];
    int i = p - 1;


    for (int j = p; j<r; j++){
        if (arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}


template <class T>                              // generating template for generic use.
void quickSort(T arr[], int p, int r)           // recursive function. Time complexity is theta(nlgn).
{
    if (p < r){
        int q = lomutoPartition(arr,p,r);
        quickSort(arr, p, q-1);
        quickSort(arr, q+1, r);
    }
}


int main()
{
    // Taking the size of array as input.
     int length;
     cout<<"\nEnter the length of your array : ";
     cin>>length;

     // Taking the elements of the array as input.
     char arr[length];
     cout<<"\nEnter  the numbers you want to insert into your array:\n";

     for(int i=0; i < length; i++){
         cin>>arr[i];
     }

     quickSort<char>(arr, 0, length-1);
     cout << "Sorting is completed:\n";

     for (int i=0; i < length; i++){
         cout << arr[i] << "\t";
     }
     cout << "\n";
}
