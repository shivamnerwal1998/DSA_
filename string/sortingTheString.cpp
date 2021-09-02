/*
1859. Sorting the Sentence
Easy

401

12

Add to List

Share
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

 

Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
Example 2:

Input: s = "Myself2 Me1 I4 and3"
Output: "Me Myself and I"
Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
*/
#include<string>
#include<string.h>
class Solution {
public:
   static bool cmp ( string a , string b ) 
    {
        return ( a[a.size()-1] < b[b.size()-1] ) ; 
        
    }
    string sortSentence(string s) {
        vector<string> result ;
        char arr[s.size() +1  ]   ;
        strcpy( arr , s.c_str() );  
        char *ptr  ; 
        ptr = strtok(arr ," ") ;
        while( ptr !=   NULL )
        {
            
            result.emplace_back( ptr ) ;
            ptr = strtok( NULL ," ") ;
        }
        sort( result.begin() , result.end() , cmp  ) ;
        string s2="" ; 
        for( int i = 0 ; i < result.size(); i++ )
        {
            s2 += result[i].substr(0 , result[i].size()-1 ) ; 
            if( i != result.size()-1 )s2 += " " ;
        }
        
    
        return s2 ; 
    }
};
