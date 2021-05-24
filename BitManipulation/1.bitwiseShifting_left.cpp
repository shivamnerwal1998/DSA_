#include<iostream>
using namespace std ;
int main()
{
    int num ;
    cout << "\nEnter number " ;
    cin >> num ;
    cout << "\nEntered number is : "<< num ;
    int i ;
    cout << "\n Enter i place you want to shift the bits  " ;
    cin >> i ;
    cout <<"\nShifting left by: "<< i  ;
    cout<<"\nResult is : " ;
    num = num << i ;
    cout << num ;
}

