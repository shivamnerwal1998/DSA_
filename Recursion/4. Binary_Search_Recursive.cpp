#include<iostream>
using namespace std;

int binarySearch(int *arr ,int left,int right,int element)
{
    if(left < right)
    {
        int mid = (left + right)/2 ;
        if( element == arr[mid] ) return mid ;
        else if( element > arr[mid] )
            binarySearch(arr , mid+1 , right , element );
        else if( element < arr[mid] )
            binarySearch(arr , 0 , mid-1 , element );

    }
    return -1 ;

}
int main()
{
    int num ;
    cin >> num ;
    int arr[num] ;
    for( int i = 0 ; i<= num-1 ; i++)
        cin >> arr[i] ;
    int element ;
        cin >> element ;
    int loc = binarySearch( arr , 0 , num-1 , element );
    cout <<"\n Location of "<<element<<" : "<< loc ;
}
