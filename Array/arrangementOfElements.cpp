#include<iostream>
using namespace std ;
void printArray(int *arr,int num)
{

     for( int i = 0 ; i <= num-1 ; i++)
        cout <<  arr[i] ;
}
void rearrange(int *arr , int num)
{
    int i = 0 ;
    for( int j = 0 ;j<= num-1 ;j++ )
    {
        if( i != j )
        {
            if( arr[j] < 0)
            {

                int temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
                i++ ;
            }
        }
    }


}
int main()
{
    int num ;
    cin >> num ;
    int arr[num] ;
    for( int i = 0 ; i <= num-1 ; i++)
        cin >> arr[i] ;
    printArray(arr,num);
    cout << "\nRearranging Array\n" ;
    rearrange(arr,num) ;
    printArray(arr,num);

}
