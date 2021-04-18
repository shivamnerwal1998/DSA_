#include<iostream>
#include<math.h>
using namespace std ;

void getArray(int *arr , int num){
    cout <<"\n" ;
    for(int i = 0 ; i <= (num-1) ; i++)
        cout << "\t" << arr[i] ;

}
int* putArray(int num){
    int *arr ;
    arr = (int*)malloc(sizeof(int)*num);
    cout << "Enter data " ;
    for(int i = 0 ; i <= (num-1) ; i++)
        cin >> arr[i] ;
    return arr ;
}

void heapify(int arr[] , int num , int i)
{
    int minVal = i ;

    int lc = ((i*2) + 1) ;
    int rc = ((i*2) + 2) ;

    if( lc < num && arr[lc] < arr[minVal])
        minVal = lc ;
    if( rc < num && arr[rc] < arr[minVal] )
        minVal = rc ;
    if( minVal != i  ){
      int temp = arr[i] ;
      arr[i] = arr[minVal] ;
      arr[minVal] = temp ;

        heapify(arr , num , minVal );

    }





}
void buildMinHeap(int arr[] ,int num)
{

    int index = ((num/2)-1);

    for( int i = index ; i >= 0 ; i--){
        heapify(arr , num , i ) ;


    }

}

int main()
{
    cout << "Enter the number of elements " ;
    int num ;
    cin >> num ;
    int *arr ;
    arr = putArray(num) ;
    getArray(arr,num);

    cout << "building min heap" ;
    buildMinHeap(arr,num);
    cout << "\nArray after building min heap \n";
    getArray(arr,num) ;


}

