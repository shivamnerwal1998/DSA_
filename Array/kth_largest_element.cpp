/*



*/
#include<iostream>
using namespace std  ;
int partition( int arr[] , int left , int right )
{
    int pivot = arr[right] ;
    int i = left - 1 ;
    for( int j = left ; j <= right-1 ; j++ )
    {
        if( arr[j] < pivot )
        {
            i++ ;
            int temp = arr[i] ;
            arr[i] = arr[j] ;
            arr[j] = temp ;
        }
    }
     int temp = arr[i+1] ;
            arr[i + 1 ] = arr[right] ;
            arr[ right ]= temp ;

    return i+1 ;
}



int kthSmallest(int arr[], int l, int r, int k)
{

    if (k > 0 && k <= r - l + 1) {

        int pos = partition(arr, l, r);

        if (pos - l == k - 1)
            return arr[pos];

        if (pos - l > k - 1) // If position is more, recur for left subarray
            return kthSmallest(arr, l, pos - 1, k);

        // Else recur for right subarray
        return kthSmallest(arr, pos + 1, r, l + k - pos  - 1);
    }

    // If k is more than number of elements in array
    return INT_MAX;
}



int main()
{
    int num  ;
    cin >> num ;
    int arr[num] ;
    int arr2[num] ;
    for( int i = 0 ; i <= num-1 ; i++ ) {
        cin >> arr[i] ;
        arr2[i] = arr[i] ;
    }

    cout << "Enter the value of K " ;
    int k ;
    cin >> k ;

    cout << kthSmallest(arr, 0, num-1 , num + 1 - k ) ;
    return 0 ;
}
