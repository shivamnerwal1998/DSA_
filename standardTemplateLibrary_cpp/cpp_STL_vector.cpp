#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int> obj; // declaring vector (dynamic array )
    cout << "size is :" << obj.size() ; // size() returns the number of elements
    cout<< endl ;
    cout << "capicity is " << obj.capacity(); // returns the capacity of vector
    cout << endl ;
    obj.push_back(1) ; /* push_back(element) function to
                         append element at the end */
    cout << "size is :" << obj.size() ;
     cout<< endl ;
    cout << "capicity is " << obj.capacity();
    cout << endl ;
    obj.push_back(2) ;
    obj.push_back(3) ;
    cout<<"capacity is :" <<obj.capacity() <<endl;
    // observe the variation in capicity
    cout<< obj.at(2) ; /*at is similer to
                        subscription operator */
    cout << endl ;
    cout << obj[2] ;
    obj.pop_back() ;
    obj.pop_back() ;
    cout << obj.size();
    cout<<endl ;
    cout << obj.back(); // return the element at end
    cout <<endl ;
    cout << obj.front() ; // return the element at front




}
