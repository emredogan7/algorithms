
#include<iostream>
#include<algorithm>

using namespace std;



// Function prototypes
// template <class T>
// T quickSort(T arr[], int p, int r)
// {
//     if
// }

template <class T>
T hoarePartition(T arr[], int p, int r)
{
    T pivot = arr[p];
    int i = p - 1;
    int j = r + 1;

    while (true)
    {
        while (arr[j] > pivot) {
            j--;
        }
        while (arr[i] < pivot) {
            i++;
        }
        if (i < j){
            swap(arr[i], arr[j]);
        }
        else
            return j;
    }
}

template <class T>
void quickSort(T arr[], int p, int r)
{
    if (p < r)
    {
        int q = hoarePartition(arr,p,r);
        quickSort(arr, p, q);
        quickSort(arr, q+1, r);
    }
}



int main()
{
    // Array to be sorted.
    const int SIZE = 10;
    int array[SIZE] = {100, 35, 7, 21, 89, 10, 148, 983, 33, 29};

    // Echo the array to be sorted.
    for (int k = 0; k < SIZE; k++)
        cout << array[k] << " ";
    cout << endl;

    // Sort the array using Quicksort.

    quickSort<int>(array, 0, SIZE-1);

    
    for (int k = 0; k < SIZE; k++)
        cout << array[k] << " ";
    cout << endl;


}
