#include<iostream>
# define INP cin >>
# define OUP cout <<
using namespace std ;

void printArray(int arr[] , int num)
{
    OUP "\nData :\n" ;
    for(int i = 0 ; i<= num-1 ; i++)
        OUP arr[i]<<"\t" ;
}
void rearrangeArray(int arr[] , int num)
{
    int j = 0 ;
    for( int i = 0 ; i <= num-1 ; i++)
    {
        if(arr[i] < 0 && i != j)
        {
            swap(arr[i] , arr[j]) ;
            j++ ;


        }

    }
}
int main()
{
    OUP "\nEnter the number" ;
    int num ;
    INP num ;
    int arr[num] ;
    OUP "\nEnter the Elements of Array" ;
    for(int i = 0 ; i <= num-1 ; i++ )
        INP arr[i] ;
    printArray(arr,num);
    rearrangeArray(arr,num);
     printArray(arr,num);

}
