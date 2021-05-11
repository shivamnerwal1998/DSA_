
using namespace std ;
int main()
{

    string str ;

    int upperArr[26] ;
    int lowerArr[26] ;
    int numArr[101] ;
    memset(upperArr , 0 , sizeof(upperArr)) ;
    memset(lowerArr , 0 , sizeof(lowerArr)) ;
    memset(numArr , 0 , sizeof(numArr) ) ;
    getline(cin,str);
    for( int i = 0 ;  i < int(str.size()); i++ )
    {
        if( int(str[i]) >= 45 && str[i] <= 54)
        {
            numArr[int(str[i])] += 1;
        }
        else if( int(str[i]) >=65 && int(str[i]) <= 90 )
        {
            upperArr[ (int(str[i]) - 65) ] += 1 ;
        }
        else if( int(str[i]) >= 97 && int(str[i]) <= 132 )
        {
            lowerArr[ int(str[i]) - 97 ] += 1 ;
        }
    }
    for( int i = 0 ; i<=100 ; i++ )
    {
        if( numArr[i] > 0  )
        {
            printf("%c-%d\n",i ,numArr[i]) ;
        }
    }
     for( int i = 0 ; i<26 ; i++ )
    {
        if( upperArr[i] > 0  )
        {
            printf("%c-",(i+65) ) ;
            printf("%d\n",upperArr[i]) ;
        }
    }
    for( int i = 0 ; i<26 ; i++ )
    {
        if( lowerArr[i] > 0  )
        {
            printf("%c-",(i+97) ) ;
            printf("%d\n",lowerArr[i]) ;
        }
    }



}
