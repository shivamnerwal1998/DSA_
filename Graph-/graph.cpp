#include<iostream>
using namespace std;

/* self refrential structure of
adjacency list node */
struct node
{
    int data ;
    struct node *next ;
};

struct adjList
{
    node *head ; // pointing to head
};

/* representing graph by adjacency lists
 size of array is total number of vertices */

struct Graph
{
    int v ;     // v -> vertices
    adjList *arr; // size of array is |v|
};


// creating a new node
node* newNode(int data)
{
    // allocating memory to new pointer
    node *ptr = new node ;
    ptr->data = data ;
    ptr->next = NULL ;
    return ptr ;
}


Graph* createGraph(int v)
{
    Graph *graph = new Graph ;
/* creating an array of adjacency list
   size of array V
 */
    graph->v = v;
    graph->arr = new adjList[v];
     for(int i=0 ; i < v ; i++)
        graph->arr[i].head = NULL ;
     return graph ;

}
void addEdge(Graph *graph , int src , int des )
{
    node *ptr = newNode(des) ;
     ptr->next = graph -> arr[src].head ;
    graph->arr[src].head = ptr ;
    ptr = newNode(src) ;
    ptr->next = graph->arr[des].head ;
    graph->arr[des].head = ptr ;

}
void printGraph()
{
    int i ;
    for( i=0 ; i<graph->v ; i++ )
    {
        node *root  = graph->arr[i].head;
        cout<<"Adjacency list for vertex "<< i << endl ;
        while(root != NULL)
        {
            cout << root->data << "->" ;
            root = root->next ;
        }
        cout << endl ;
    }

}

int main()
{

}




