#include<iostream>
#include<vector>
using namespace std ;
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
