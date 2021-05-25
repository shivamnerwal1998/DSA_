#include<iostream>
using namespace std;

int main(){

    int num ;
    cout <<" \nEnter the number  " ;
    cin >> num ;

    int cnt = 0  ;
      cout<<"\nSetBits in "<<num<<" : " ;
    while( num > 0 )
    {
          if( num & 1 != 0 ) cnt++ ;
            num = num >> 1 ;

    }
    cout << cnt ;
    return 0 ;
}
