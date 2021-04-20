#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    cout << "enter the number of vertices \n " ;
    int v ;
    cin >> v ;
    cout << "enter the number of edges  \n " ;
    int e ;
    cin >> e ;
    int arr[v][v];
    memset(arr , 0 , sizeof(arr)) ;
    for(int i = 0 ; i < e ; i++)
    {
        int a,b ;
        cout << "enter the cordinates of edge" ;
        cin >> a ;
        cin >> b ;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    cout << "\n The graph is  \n" ;
    for(int i=0 ; i < v ; i++ )
    {
        for(int j=0 ; j< v ; j++ )
        {
            cout<< arr[i][j] << "  " ;

        }
        cout << endl ;
    }
}
