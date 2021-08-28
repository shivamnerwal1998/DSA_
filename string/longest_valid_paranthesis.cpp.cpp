/*
  
  32. Longest Valid Parentheses
Hard

5983

209

Add to List

Share
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

 

Example 1:

Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
Example 2:

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
Example 3:

Input: s = ""
Output: 0
 

*/
class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<char> st ; 
        stack<int> index ;
        index.push(-1) ; 
        int len = 0 ; 
        for( int i = 0 ; i < s.size() ; i++ )
        {
            if( s[i] == '(' )
            {
                st.push( '(' )  ;
                index.push(i) ; 
            }
            else 
            {
                if( !st.empty() && st.top() == '(' )
                {
                    st.pop() ; 
                    index.pop(); 
                    len = max( len , i - index.top() ) ;  
                }
                else index.push(i) ; 
                
            }
            
        }
        return len ;
        
    }
};
