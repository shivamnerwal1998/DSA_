/*
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

 

Example 1:


Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: l1 = [], l2 = []
Output: []
Example 3:

Input: l1 = [], l2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both l1 and l2 are sorted in non-decreasing order.



*/
class Solution {
    
public:
    
    void insertAtEnd( ListNode **head , int data )
    {
        ListNode *ptr = new ListNode(data);
        if( *head == NULL )
        {
            *head = ptr ;
            
        }
        else{
            ListNode *temp = (*head) ;
            
            while( temp->next != NULL )
                temp = temp->next; 
            temp -> next = ptr ;
        }
        
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
     
        ListNode *head = NULL ;
    
        if( l1 == NULL && l2 == NULL  ) return NULL ;
        
        while( l1 != NULL && l2 != NULL )
        {
            if( l1->val <= l2->val )
            {
                insertAtEnd(&head , l1->val ) ; 
                l1 = l1->next ; 
                
                
            }
            else{
                  insertAtEnd(&head , l2->val ) ; 
                  l2 = l2->next ;   
             
            }
        }
            if( l1 == NULL )
            {
                while( l2 != NULL )
                {
                      insertAtEnd(&head ,l2->val ) ; 
                     l2 = l2->next ; 
                
                  
                }
            }
            else if( l2 == NULL )
            {
                while( l1 != NULL )
                {
                     insertAtEnd(&head , l1->val) ; 
                     l1 = l1->next ; 
                
                }
            }
        
        return head ;
          
   
    }
};
