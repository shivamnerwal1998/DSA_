#include <iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std ;
int main()
{
    string str ;
    vector<string> vec ;
    getline( cin , str );
    char *ptr;
    char str2[str.length()+1] ;
    strcpy( str2 , str.c_str() );
    ptr = strtok( str2 ," " ) ;
    while( ptr !=  NULL )
    {
        vec.emplace_back(ptr);
        ptr = strtok(NULL," ");

    }
    for( auto it : vec )
        cout<<it<<"\n" ;
    return 0 ;
}
