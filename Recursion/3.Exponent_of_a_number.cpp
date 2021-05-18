#include<iostream>
using namespace std ;

class Exponent{
public :
    int exponentRecursive(int base , int power)
    {
        if( power == 0 )
            return 1 ;
        else
            return (base * exponentRecursive(base,power-1));
    }

};
int main()
{

    Exponent obj ;
    int base ;
    int power ;
    cout << "\nEnter the Base" ;
    cin >> base ;
    cout << "\nEnter the Power" ;
    cin >> power ;
    int sol = obj.exponentRecursive(base , power);
    cout <<base <<"^"<<power <<" : "<<sol ;
}
