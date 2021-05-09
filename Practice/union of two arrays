
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int consecutiveSetBits(int *arr, int num)
{
    int sum = 0 ;
    int sumM = 0  ; 
    for( int i = 0 ; i <= num-1 ; i++ )
    {
        sum = sumM ; 
        sumM += arr[i] ;
        if( sumM <= sum && i != 0 ){
            sumM = 0 ;            
        }
        
    }
    return sumM ;
}
int main() {

    int num ;
    cin >> num ;
    int arr[num] ; 
    for( int i = 0 ; i <= num-1 ; i++)
        cin >> arr[i] ;
    cout<< consecutiveSetBits(arr , num ) ;

    return 0;
}
/*   ispe baad m kaam karna hai 

    // { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        vector <int>arr ; 
        int flag1 = 0  ; 
        int flag2 = 0 ; 
        int count = 0 ; 
        int i = 0 ; 
        sort(a,a+n);
        sort(b,b+m) ; 
        while( flag1 < n && flag2 < m)
        {
            if( a[flag1] == b[flag2] )
            {
                if( i > 0 &&  ( arr[i-1] == a[flag1] ) ){
                    flag1++ ; 
                    flag2++ ; 
                }
                else{    
                arr.push_back( a[flag1] ) ; 
                flag1++ ;
                flag2++ ; 
                i++  ;
                }
            }
            else if(a[flag1] < b[flag2]) {
                
                if( i > 0 &&  ( arr[i-1] == a[flag1] )  ){
                    flag1++ ; 
                }
                else{
                arr.push_back( a[flag1] ) ;
                    i++ ; 
                    flag1++ ; 
                }
            }
            else{
                
                if( i > 0 && ( arr[i-1] == b[flag2] ) ){
                    flag2++ ;
                }
                else{
                    arr.push_back(b[flag2]) ; 
                    i++;
                    flag2++ ;
                    
                }
            }
                
            }
        
        if( flag1 >= n   )
        {
            while( flag2 < m  )
            {
               if( i > 0 && ( arr[i-1] == b[flag2] ) ){
            
                    flag2++ ;
               } 
                else{
                  i++ ; 
                    arr.push_back(b[flag2]) ;
                    flag2 ++ ; 
                }
            }
        }
        else if( flag2 >= m ){ 
            while( flag1 < n )
            {
                  if(  i > 0 &&  ( arr[i-1] == a[flag1] )  ){
                    flag1++ ; 
     
                }
                
                else{
                i++ ; 
                arr.push_back( a[flag1] ) ;
                flag1 ++ ;
                }
            }
        }
        
    return i ;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends

*/
