#include<iostream>
using namespace std ;
int main()
{
    int num1 ;
    int num2 ;
    cout << "\nENTER NUMBER 1" ;
    cin >> num1 ;
    cout << "\nENTER NUMBER 2" ;
    cin >>num2 ;
    num1 = num1^num2 ;
    num2 = num1^num2 ;
    num1 = num1^num2 ;
    cout << "Num1:"<<num1<<"\n" ;
    cout << "Num2:"<<num2 ;

}
