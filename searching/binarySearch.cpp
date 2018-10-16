

// this code illustrates the binary search algortihm.
// To run the code from the terminal (OSX or Linux),
// change your directory and type the commands:
// $ g++ binarySearch.cpp -o output
// $ ./output


#include <iostream>
using namespace std;

bool isSorted(const int *ar, int size)
{
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

void binarySearch(int arr[], int left, int right, int key)
{   while (right >= left)
    {
        int mid = (left + right)/2 ;


        // right of the recursion applied subarray.
        if (arr[mid] < key)
            left = mid + 1;
        else if (arr[mid] == key)
        {
            cout << "the element "<< key << " is found in the position " << mid<<"\n";
            break;
        }
        // left of the recursion applied subarray.
        else
            right = mid-1;
    }

    if(right<left)
        cout << "The provided key element " << key <<  " is not available in the array. \n";

    // there is no element left in the subarray.
    // i.e. no element to search for.
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
    for(int i=0; i < length; i++)
    {
      cin>>arr[i];
    }



    if (isSorted(arr, length) == 0)
    {
        cout <<"\n\n"<< "Your array is not a sorted one. \n\n";
        cout << "Sorry, it is not logical to sort your array and then search for the key. \n\n";
        cout << "If I first sort your array (O(nlgn) and then search for the key (O(lgn)), it will cost you O(nlg^2n). \n\n";
        cout << "You better search it linearly which is O(n). \n\n";

    }

    else
    {
        int key;
        cout << "Please enter the key value to be searched within the array.\n";
        cin >> key;
        cout << "\n\nSearching operation begins.\n\n\n";
        int position;
        binarySearch(arr, 0, length-1, key);

    }



    return 0;
}
