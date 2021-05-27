 #include<iostream>
 using namespace std ;
 int digitsSum(int num)
 {
     if( num == 0 )
        return 0 ;
     return (num%10) + digitsSum(num/10)  ;

 }

 int main(){

    int num ;
    cin >> num ;
    cout<<digitsSum(num);

 }

