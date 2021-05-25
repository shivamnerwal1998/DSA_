#include<iostream>
using namespace std ;
int main()
{
    int num ;
    cout << "Enter the number\n " ;
    cin >> num ;
    cout << "Enter index\n" ;
    int index ;
    cin >> index ;
    int f = 1 ;
    f = f << index ;
    int res = (num & index) ;


    if( res == 0 ){
        cout << "\nFalse" ;
    }
    else{
        cout<<"\n True";
    }


    return 0 ;
}
