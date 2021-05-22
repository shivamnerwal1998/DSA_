#include<iostream>
using namespace std ;

typedef struct Node{
    int info ;
    struct Node *next ;
}Node ;

struct Queue{
    Node *Front ;
    Node *Back ;
};
typedef struct Queue Queue ;

void createQueue( Queue *q ){

    q->Front = NULL ;
    q->Back = NULL ;

}
void    Enqueue(Queue *q , int num)
{
    Node *ptr ;
    ptr = (Node *)malloc( sizeof(Node) ) ;
    ptr->info = num ;
    ptr->next = NULL;
    if( q->Front == NULL && q->Back == NULL ){
        q->Front = ptr ;
        q->Back = ptr ;
    }
    else{
        q->Back->next = ptr ;
        q->Back = ptr ;
    }


}
bool isEmpty(Queue q){
    if( q.Front == NULL && q.Back == NULL ) return true ;
    return false ;
}
void Dequeue(Queue *q)
{
    if( isEmpty( (*q) ) ){
        cout << "Empty\n" ;
        return ;
    }
    Node *temp ;
    temp = q->Front  ;
    q->Front = (q->Front)->next ;
    free(temp);
    temp = NULL;
    if( q->Front == NULL )  q->Back = NULL ;
 }

int main()
{
    Queue q;
    createQueue(&q);

    while(true){

            system("cls");
            cout <<"\tMenue\n";
            cout <<" 1. Enqueue\n";
            cout <<" 2. Dequeue\n";
            cout <<" 3. Element at front\n";
            cout <<" 4. Element at Back\n";
            cout <<" 5. Exit\n";
    int choice  ;
    cin >> choice ;
    switch(choice){
    case 1:
        cout << "\nEnter the number \n" ;
        int num ;
        cin >> num ;
        Enqueue(&q , num) ;
        break ;

    case 2:
        Dequeue(&q);
        break ;
    case 3:
        isEmpty(q)? cout <<"\nQueue is Empty\n" :
        cout <<"\nFront is : "<<q.Front->info ;
        scanf("\n") ;
         getchar();
        break;
    case 4:
        isEmpty(q)?cout<<"\nQueue is Empty\n":
        cout <<"\nBack is : "<<q.Back->info ;
        scanf("\n") ;
        getchar();
        break ;

    case 5:
        cout << "\n\n" ;
        exit(0) ;
        break ;
    default :
        cout << "wrong option " ;
        exit(1) ;

    }
        scanf("/n") ;
        getchar();
    }


}
