#include<iostream>
#include<string>
using namespace std ;
bool match( string text , string pattern , int start )
{
    bool flag = true ;
    for( int i = 1  ; (i < pattern.size() && i+start < text.size()) ; i++)
    {
        if( text[start+i] != pattern[i] ) {
                flag = false;
                return flag ;
        }

    }
    return flag ;
}



int main()
{
    string text  ;
    getline( cin , text ) ;
    string pattern ;
    getline( cin , pattern ) ;


    for( int i = 0 ;  i < text.size() ; i++ )
    {
        if( text[i] == pattern[0] )
        {
            if(match( text , pattern , i )){
                    cout<<" String contains this pattern starting from index"
                    << i ;
                    return 0  ;
            }
            else continue;
        }
    }


    return 0 ;
}
