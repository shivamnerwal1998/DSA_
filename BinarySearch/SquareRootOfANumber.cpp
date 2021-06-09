#include<iostream>
using namespace std ;

int mySqrt(unsigned long int num) {
    long int left = 0 ;
    long int right = num ;
    long int  ans ;
    if( num == 0  ) return 0 ;
    if( num == 1  ) return 1 ;
    while( left <= right ){
        int mid = left + (right-left) / 2 ;
        if( mid == (num/mid) ){
            ans = mid ;
            break ;
        }
        else if( mid  < (num/mid)) {
            left = mid+1 ;
            ans = mid ;
        }
        else right = mid - 1 ;
    }
    return ans ;

}


int main()
{
    int num ;
    cin >> num ;
    cout<<mySqrt(num);
}

