/*

125. Valid Palindrome
Easy

2299

4151

Add to List

Share
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.

*/

class Solution {
public:
    bool isPalindrome(string s) {
        
        string dummy ;
        int i = 0 ;
        while( i <= s.size() - 1 )
        {
            if( ( int(s[i]) >= 97 && int( s[i] <= 122 ) ) || ( int( s[i] ) >= 65 && int(s[i]) <=  90 )  || ( int(s[i]) >= 48 && int( s[i] <= 57 ) )  )
            {
                dummy += toupper(s[i]) ; 
                i++ ; 
            } 
            else i++ ;
        }
        if( dummy.size() == 0 || dummy.size() == 1 ) return true ;
        int size = dummy.size() - 1 ; 
        for( int i = 0 ; i <= (size/2) ; i++ )
        { 
         
            if(  dummy[i]  != dummy[ size - i] ) return false ;             
            
        }
        
        return true; 
        
    }
};
