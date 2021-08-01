/*

234. Palindrome Linked List
Easy

5982

461

Add to List

Share
Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9


*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head ; 
        ListNode *fast = head ;
        
        ListNode *head_2 ;

        if( head == NULL || head->next == NULL ) return true ;
        
        while( 1 ) {
            
            fast = fast->next->next ; 
                   if( fast == NULL )
            {
                head_2 = slow->next ; 
                break ;
            }
            
            if( fast->next == NULL )
            {
                head_2 = slow->next->next ; 
                break ;
                
            }
     
            slow = slow->next ;  
            
            
        }
        slow->next = NULL ; 
        
        stack <int> s ; 
        
        while( head_2 != NULL )
        {
            s.push( head_2->val )  ;
            head_2 = head_2->next ;
        }
        
        
        while(  !s.empty() && head != NULL )
        {
            if( s.top() == head->val )
            {
                s.pop();
                head = head->next ; 
            }
            else return false ;
        }
        return true ;
    }
};
