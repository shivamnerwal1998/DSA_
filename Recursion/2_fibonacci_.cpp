#include<iostream>
using namespace std ;


void fibonacci_iterative(int num)
{
    int a = 1 ;
    int b = 1 ;
    cout << a <<"\t" ;
    cout << b <<"\t" ;
    int c ;
    for(int i= 3 ; i <= num ; i++ )
    {
        c = a+ b;
        cout << c<<"\t" ;
        a = b ;
        b = c ;
    }
}
int fibonacciRecursive(int num)
{
    if( num ==1 || num == 2 )
        return 1 ;
    else
        return (fibonacciRecursive(num-1)
                + fibonacciRecursive(num-2)) ;

}
int main()
{
    int num ;
    cout <<"\nEnter the number\n " ;
    cin >> num ;
    cout<<fibonacciRecursive(num);
}
