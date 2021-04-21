#include<array>
#include<iostream>
using namespace std ;
int main()
{
    array<int,5> arr ;
    arr.fill(3) ;     // fill 3 to all the elements of Array
    arr.at(4) = 1 ;  // at is similer to subscript variable
    for(int i = 0 ; i < 5 ; i++ )
        cout<< arr[i] << endl ;

    cout << "******" << endl ;
    cout << arr.back();    // back returns the last element of array
    cout << arr.front() ;  // front returns the first element of array

    return 0 ;
}
