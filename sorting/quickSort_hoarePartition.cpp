
#include<iostream>
#include<algorithm>                             //for swap() function.

using namespace std;

template <class T>                              // generating template for generic use.
T hoarePartition(T arr[], int p, int r){
    T pivot = arr[p];
    int i = p - 1;
    int j = r + 1;

    while (1)
    {
        do{
            j--;
        }while(arr[j] > pivot);
        do{
            i++;
        }while(arr[i] < pivot);

        if (i < j){
            swap(arr[i], arr[j]);
        }
        else
            return j;
    }
}


template <class T>                              // generating template for generic use.
void quickSort(T arr[], int p, int r)           // recursive function. Time complexity is theta(nlgn).
{
    if (p < r){
        int q = hoarePartition(arr,p,r);
        quickSort(arr, p, q);
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
     int arr[length];
     cout<<"\nEnter  the numbers you want to insert into your array:\n";

     for(int i=0; i < length; i++){
         cin>>arr[i];
     }

     quickSort<int>(arr, 0, length-1);
     cout << "Sorting is completed:\n";

     for (int i=0; i < length; i++){
         cout << arr[i] << "\t";
     }
     cout << "\n";
}
