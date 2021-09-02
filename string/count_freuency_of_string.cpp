// using unordered maps 
#include<iostream>
#include<unordered_map>
using namespace std ;
int main()
{
    unordered_map<string,int> m ;

    for( int i = 0 ; i < 7 ;  i++ )
    {

        string str ;
        getline( cin , str ) ;
        m[str] += 1 ;

    }
    for( auto it : m  )
    {
        cout << it.first<< "->"<< it.second << endl ;
    }

    return 0 ;
}

