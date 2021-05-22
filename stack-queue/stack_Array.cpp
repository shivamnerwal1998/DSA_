#include<iostream>
#define CAP 10
using namespace std ;


typedef struct Node{
    int arr[CAP] ;
    int top ;

}Node ;

void createStack(Node *s)
{
    s->top = -1 ;

}
bool isFull(Node s)
{
    if( s.top == CAP ){
            cout<<"bvkbk" ;
            scanf("\n") ;
            getchar();
        return true ;
    }
    return false  ;
}
bool isEmpty(Node s)
{
    if( s.top == -1 )
        return true ;
    return false  ;
}
void push(Node *s , int data)
{

    (s->top) = (s->top) + 1 ;

    s->arr[s->top] = data ;


}
int pop(Node *s)
{
    if( !isEmpty(*s) ){

    int data ;

    data = s->arr[s->top] ;
    (s->top)-- ;
    return data ;
    }
    else{
        cout <<"\nStack is empty\n" ;
    }
    return -1 ;
}
int peek(Node s)
{
    if( isEmpty(s) ){
        cout <<"Stack is Empty \n" ;
        return -1 ;
    }
    int data ;
    data = s.arr[s.top] ;
    return data ;

}


int main()
{
    Node Stack ;
    createStack(&Stack);


    while(true){

            system("cls");
            cout <<"\tMenue\n";
            cout <<" 1. PUSH\n";
            cout <<" 2. POP\n";
            cout <<" 3. PEEK\n";
            cout <<" 4. IS EMPTY\n";
            cout <<" 5. IS FULL\n";
            cout <<" 6. Exit\n";
    int choice  ;
    cin >> choice ;
    switch(choice){
    case 1:
        cout << "\nEnter the number \n" ;
        int num ;
        cin >> num ;
        push(&Stack , num) ;
        break ;

    case 2:
        cout <<"Poped Element is : "<<pop(&Stack)<<"\n";
        scanf("\n");
        getchar() ;
        break ;
    case 4:
        isEmpty(Stack)?cout << "Stack is Empty\n":
            cout<<"Stack is Not Empty\n" ;
        scanf("\n") ;
         getchar();
        break;
    case 3:
        cout<<"Element on top is : "<<peek(Stack)<<"\n" ;
        scanf("\n") ;
        getchar();
        break ;

    case 6:
        cout << "\n\n" ;
        exit(0) ;
        break ;
     case 5:
          isFull(Stack)?cout << "Stack is Full\n":
            cout<<"Stack is Not Full\n" ;
        scanf("\n") ;
         getchar();
        break;
    default :
        cout << "wrong option " ;
        exit(1) ;

    }
        scanf("/n") ;
        getchar();
    }


}
