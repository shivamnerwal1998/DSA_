int partetian(int *arr , int left , int right )
{
    int x = arr[right] ;
    int i = (left-1) ;
    for(int j = 0 ; j<= right-1 ; j++ )
    {
        if( arr[j] <= x)
        {
            i++ ;

            int temp = arr[j] ;
            arr[j] = arr[i] ;
            arr[i] = arr[j] ;

        }
    }
    int temp = arr[i+1] ;
    arr[i+1] = arr[right] ;
    arr[right] = temp ;
    return (i+1) ;
}
