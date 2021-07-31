// function yo find middle of linked list 

    ListNode* middleNode(ListNode* head) {
        
        ListNode *slow  = head ; 
        ListNode *fast  = head ;
        
        while( fast != NULL && fast->next != NULL )
        {
            slow = slow->next ; 
            fast = (fast->next)->next ;
            
        }
        return slow ;

        
    }
};
