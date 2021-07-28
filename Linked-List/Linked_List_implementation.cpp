#include<iostream>
using namespace std ;

class Node{
public :
    int data ;
    Node *next ;
    Node( ){   }
    Node( int info )
    {
        data  = info ;
    }
};

void insertAtFront( Node **head , int info)
{
    Node *ptr ;
    ptr  = new Node( info );
    ptr->next = (*head) ;
    *head = ptr ;
}

void insertAtEnd( Node **head , int info )
{
    Node *ptr = new Node( info );

    if( (*head) == NULL )
    {
        ptr->next = *head ;
        (*head) = ptr ;
    }
    else
    {
        Node *temp ;
        for(  temp = *head ; temp->next !=NULL ; temp=temp->next );
        temp->next = ptr ;
        ptr->next = NULL;

    }
}

void printList( Node* head )
{
    while( head != NULL )
    {
        cout << head->data << "\t" ;
        head = head->next ;
    }

}

void insertAfter(Node **head ,int target , int info )
{

    if( *head == NULL )
    {
        return ;
    }
    else
    {
        Node *ptr  ;
        ptr = (*head) ;
        while( ptr!= NULL  && ptr->data != target )
            ptr = ptr->next ;

        if( ptr != NULL ){

            Node *temp = new Node( info ) ;
            temp->next = ptr->next ;
            ptr->next = temp ;
            return;
        }
        else{
               cout <<" Item not found  " ;
                return ;

        }

    }

}

void insertBefore(Node **head ,int target , int info )
{

    if( *head == NULL ) return  ;

    Node *ptr = new Node( info );

    if(  (*head)->data == target )
    {
        ptr->next = (*head) ;
        (*head) = ptr ;

    }
    else
    {
        Node *temp ;
        temp = (*head) ;
        Node *btemp ;

        while( temp != NULL && temp->data !=  target )
        {
            btemp = temp;
            temp = temp->next;
        }
        if( temp == NULL )
        {
            cout <<" \n Not Found \n" ;
            return ;

        }
        btemp->next = ptr ;
        ptr->next = temp ;

    }
}

int main()
{
    Node *head ;
    head = NULL; // empty list is created

    insertAtEnd( &head  , 10 ) ;
    insertAtEnd( &head  , 20 ) ;
    insertAtEnd( &head  , 30 ) ;
    insertAtFront( &head  , 5 ) ;
    insertBefore( &head , 1000 ,  -11);
    printList(head);
}
