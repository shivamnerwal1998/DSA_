#include<iostream>
using namespace std ;
void printArray(int *arr,int num)
{

     for( int i = 0 ; i <= num-1 ; i++)
        cout <<  arr[i] ;
}

void reverseArr(int *arr , int left ,int right)
{
    while( left < right ){
        int temp = arr[left] ;
        arr[left] = arr[right] ;
        arr[right] = temp ;
        left++ ; right-- ;
    }

}

int main()
{
    int num ;
    cin >> num ;
    int arr[num] ;
    for( int i = 0 ; i <= num-1 ; i++)
        cin >> arr[i] ;
    printArray(arr,num);
    cout << "\nEnter the no of rotations " ;
    int k ;
    cin >> k ;
    reverseArr(arr , 0 ,  num-(k+1) ) ;
    reverseArr(arr , num-k , num-1 ) ;
    reverseArr(arr , 0 , num-1 ) ;
    printArray(arr,num);

}


