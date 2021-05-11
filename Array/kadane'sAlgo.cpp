#include<iostream>
using namespace std ;
void printArray(int *arr,int num)
{

     for( int i = 0 ; i <= num-1 ; i++)
        cout <<  arr[i] ;
}

int maxSum(int *arr , int num)
{
    int meh =  0  ;
    int msf = INT_MIN ;
    for( int i = 0 ; i<= num-1 ; i++ )
    {
        meh = meh + arr[i] ;
        if( meh < arr[i] )  meh = arr[i] ;
        if( meh > msf ) msf = meh ;
    }
    return msf ;


}

int main()
{
    int num ;
    cin >> num ;
    int arr[num] ;
    for( int i = 0 ; i <= num-1 ; i++)
        cin >> arr[i] ;
    cout << "\n max sum SubArray "  ;
    cout << maxSum(arr,num);


}

