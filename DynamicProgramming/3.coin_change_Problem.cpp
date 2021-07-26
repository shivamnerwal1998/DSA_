#include<iostream>
using namespace std ;

int count_coins( int value[] , int sum , int num)
{
    int Tab[ num + 2 ][ sum + 2 ] ;
    for( int i = 1 ; i<= sum ;i++  )
        Tab[0][i] = 0 ;

    for( int i = 0 ; i <= num ; i++)
        Tab[i][0] = 1 ;

    for(int i = 1; i <= num ; i++)
    {
        for( int j = 1 ; j <= sum ; j++  )
        {
            if( j >= value[i-1] ) {
    Tab[i][j] =
            Tab[i-1][j] + Tab[i][j - value[i-1] ];
            }
            else {
                 Tab[i][j] = Tab[i-1][j] ;
               }
        }
    }
    for( int i = 0 ; i <= num ; i++ ){
        for( int j = 0 ; j <= sum ; j++)
    {

        cout<<Tab[i][j] ;
    }cout<<endl ;

    }

    return Tab[num ][sum ] ;

}

int main()
{
    cout << "Enter the number of coins  " ;
    int num ;
    cin >> num ;
    cout << "Enter the denominatio of coin" ;
    int coin[num] ;
    for( int i = 0 ; i <= num-1 ; i++)
        scanf("%d",&coin[i]) ;
    cout <<" Enter the sum " ;
    int sum ;
    cin >> sum ;

    cout << count_coins( coin , sum ,  num ) ;


}
