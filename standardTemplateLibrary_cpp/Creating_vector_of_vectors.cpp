#include<iostream>
#include<vector>
using namespace std ;
void printMatrix( vector<vector<int>>matrix ){

    for(int i = 0 ; i< matrix.size(); i++){
        for( int j = 0 ; j< matrix[1].size() ; j++)
        {

            cout<<matrix[i][j]<<"\t" ;
        }
        cout<<"\n";

    }

}
int main()
{
    vector<vector<int>>matrix ;
    cout << " Enter the number of rows  " ;
    int rows ;
    cin >> rows ;
    cout <<" Enter the number of columns " ;
    int col ;
    cin >> col ;
    for( int i = 0 ; i<= rows-1 ; i++ ){
                vector<int> row ;
        for( int j = 0 ; j<= col-1 ; j++ ){
            int data ;
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<endl ;
            cin >> data ;
            row.emplace_back(data);
        }
        matrix.emplace_back( row ) ;

    }
    printMatrix(matrix) ;

}
