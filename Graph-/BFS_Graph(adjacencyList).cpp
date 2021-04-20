#include<iostream>
#include<vector>
#include<queue>
using namespace std ;
void printGraph(vector <int>V[] , int n)
{
    cout << " \n Printing the graph \n " ;
    for(int i = 0; i< n ;i++)
    {
        cout << "list for vertice " << i <<endl;

        for(auto j:V[i])
        {
            cout <<j<<"->" ;
        }
        cout << endl ;
    }

}

// n is the number of vertices
void BFS(vector <int> V[],int n,int s)
{
    queue <int> q ; // using queue data structure
    bool visited[n+2] = {false} ;
     /* 
          declaring the array of booleans and
         initializing it with false 
     */
    q.push(s);
    visited[s] = true ;
    while(!q.empty())
    {
        int node = q.front() ;
        q.pop() ;

        cout << node <<"->" ;
        vector <int> :: iterator j ;
        for(  j = V[node].begin(); j!= V[node].end() ; j++)
        {
            if( !visited[*j] )
                {
                   visited[*j] = true ;
                   q.push(*j);
                }
        }
    }

}

int main()
{
    cout << "\n  Enter the number of vertices   \n" ;
    int n ;
    cin >> n ;
    vector <int> V[n] ;
    cout << "\n Enter the number of edges: \n" ;
    int e ;
    cin >> e ;
    for(int i = 0 ; i < e ; i++)
    {
        cout <<"\n Enter the connecting nodes : \n" ;
        int u , v ;
        cin >> u >> v ;
        V[u].push_back(v);
        V[v].push_back(u);
    }
   
    printGraph(V , n ) ;
    cout << endl << "Breadth First Search" << endl ;
    cout <<"\n Enter the starting vertex :  \n" ;
    int s ;
    cin >> s ;
    BFS(V,n,s); // V-> graph ,n -> number of nodes , s -> selected node 

}
