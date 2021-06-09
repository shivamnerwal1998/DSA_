/*

    Better approach to find the mid value :-

    int mid = left + (right - left )/2   ;


*/
#include<vector>
#include<iostream>
using namespace std ;

    int left = 0  ;
    int right = nums.size() ;

    while( left < right ){
        int mid = left + (right - left )/2 ;
        if( nums[mid] == target  )
            return mid+1 ;
        else if(  nums[mid] < target  )
                left = mid+1 ;

        else    right = mid-1 ;
    }
    return -1 ;
}
int main()
{
    vector <int> nums;
    int target ;
    cout <<"\nEnter the element to search " ;
    cin >> target ;
    int num ;
    cout << "\nEnter the number of elements " ;
    cin >> num ;
    for( int i = 0 ; i< num ; i++){
        int elem ;
        cin >> elem ;
        nums.push_back(elem) ;
    }
    cout << "position of" << target <<":" <<binarySearch(nums , target ) ;


}
