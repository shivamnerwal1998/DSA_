/*
 
  Number of ways to reach on top of stairs which consists n steps 
  user can climb either 1 or 2 steps at a time . 
    Ex - if n = 2 number of ways = 2 ( 1+1 , 2 )   
         if n = 4 number of ways = 4 ( 1 + 1 + 1 + 1 , 2 + 2 , 1 + 1 + 2 , 2 + 1 + 1 , 1 + 2 + 1  )
         if n = 5 number of ways = 8  
       
 */ 

#include<iostream>
using namespace std ;

int stairCase(int num)
{
    if( num < 0 ) return 0 ;
    if( num == 0 || num ==1 )
        return 1 ;
    return ( stairCase(num-1) + stairCase(num-2) ) ;

}

int main(){

    int num ;
    cin >> num ;
    cout << stairCase(num) ;
}
