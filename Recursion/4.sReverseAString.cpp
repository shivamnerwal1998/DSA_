/**
    Reversing a string by using Recursion
**/
#include<iostream>
#include<string>
using namespace std ;

void reverseString(string s)
{
        if( s.size() == 0 )
            return ;

        reverseString( s.substr(1 )) ;
        cout<< s[0] ;
}
int main()
{
     string s  ;
     getline(cin,s);
     cout << "\nString is :" << s ;
     cout<<"\nReversing the string :" ;
     reverseString(s) ;

    return 0 ;
}
