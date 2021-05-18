#include<iostream>
using namespace std ;

unsigned long long factorial(int num)
{
    if( num <= 1   ){
        return 1 ;
    }
    return num * factorial(num-1) ;
}
int main()
{
    cout << "Enmter the number" ;
    int num ;
    cin >> num ;
    cout  << "\n"<<factorial(num);

}
