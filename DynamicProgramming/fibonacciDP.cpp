#include<iostream>
using namespace std ;

int fibonacci( int num )
{
    int arr[num+2] ; // Taking an array of size greater than number 
    arr[0] = 0  ;
    arr[1] = 1  ;
    for( int i = 2 ; i <= num ; i++)
    {
        arr[i] = arr[i-1] + arr[i-2] ;
    }
    return arr[num] ; // returning the final fibonacci number 
}
int main()
{
    int num ;
    cout <<"\nEnter the number " ;
    cin >> num ;
    cout << "\n Fibonacci of "<< num<<" : "<<fibonacci(num);
    return 0  ;
}
