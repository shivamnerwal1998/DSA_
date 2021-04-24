#include<iostream>
using namespace std ;

void printArray(int *arr , int num)
{
    for(int i = 0 ; i <= num-1 ; i++)
        cout << arr[i] << "\t" ;
}
void swapNum(int *num1 , int *num2)
{
    int temp = *num1 ;
    *num1 = *num2 ;
    *num2 = temp ;

}

int partetion(int *arr , int left , int right )
{
    int x = arr[right] ;
    int i = (left-1) ;
    for(int j = left ; j<= right-1 ; j++ )
    {
        if( arr[j] <= x)
        {
            i++ ;

            swapNum(&arr[i] , &arr[j]) ;

        }
    }
    swapNum( &arr[i+1] , &arr[right]) ;
    return (i+1) ;
}
int quickSelect(int *arr,int left, int right,int k)
{
    int index = partetion(arr,left,right);
    if( index+1 > k )
        return quickSelect(arr,0,index-1,k) ;
    else if( index+1 < k ) return quickSelect(arr,index+1,right,k);
    else return arr[index] ;
}
int main()
{
    int num ;
    cout << "\nEnter the number" ;
    scanf("%d",&num) ;
    int arr[num];
    cout << "Enter the elements of Array " ;
    bool flag = true ;
    for( int i = 0 ; i <= num-1 ; i++ ){
        cin >> arr[i];
        if( i >=0 ){
            if( arr[i-1] > arr[i])
            {
                flag = false ;
            }
        }
    }

    cout << "Enter the Kth element " ;
    int k ;
    scanf("%d",&k) ;
     if( flag){
        return arr[k-1] ;
    }
    cout <<"\n"<<quickSelect(arr,0,num-1,k);



}
