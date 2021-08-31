/*
    In Linear Time complexity by 
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std ;

vector<int> nextGreatestElement( vector<int> &nums)
{
    int n = nums.size();
    vector<int> result( n , -1) ;
    stack<int> st ;
    for( int i = (2*n -1) ; i >= 0 ; i-- )
    {
        while( !st.empty() && st.top() <= nums[i%n] )
        {

            st.pop() ;
        }

        if( i < n  )
        {
            if( !st.empty() ) result[i] = st.top() ;
        }

        st.push( nums[i%n] ) ;

    }

    return result;
}
int main()
{
    vector<int> arr ;
    int n ;
    cin >> n ;
    for( int i = 0 ; i < n ; i++)
    {

        int data ;
        cin >> data ;
        arr.emplace_back(data) ;
    }
    vector<int> result = nextGreatestElement( arr ) ;
    for( auto it : result )
        cout << it<<" ";


    return 0 ;
}
