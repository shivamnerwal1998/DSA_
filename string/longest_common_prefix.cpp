#include<string.h>
class Solution {
    
    int checkLength(string a , string b)
    {
        int i = 0  ; 
        while( i< a.length() && i < b.length() )
        {
            if( a[i] == b[i] ) i++ ; 
            else break ; 
        }
        return i ; 
        
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int len = INT_MAX ; 
        for( int i = 1 ; i < strs.size() ; i++)
        {
            int sLength = checkLength(strs[i-1] , strs[i]) ;
            if( sLength == 0 ) return "" ;
            if( sLength < len ) len = sLength ; 
        }
        return strs[0].substr(0,len)  ;        
    }
};
