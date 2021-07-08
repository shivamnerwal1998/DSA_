/*

258. Add Digits
Easy

1271

1343

Add to List

Share
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
 

Follow up: Could you do it without any loop/recursion in O(1) runtime?

*/
class Solution {
    int sum_of_digits( int num )
    {
        if( num == 0  ) return 0 ; 
        else{
            
            int sum = num % 10 + sum_of_digits( num / 10 ) ;
            if( sum >= 10 ) sum = sum_of_digits( sum ) ;
            return sum ;
            
        }
        
    }
public:
    int addDigits(int num) {
        
        return sum_of_digits( num ); 
        
    }
};
