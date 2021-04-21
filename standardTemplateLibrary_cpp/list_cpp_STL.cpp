#include<iostream>
#include<list>

using namespace std ;
 int main()
 {
      list <int> l1;
      cout << "list data \n " ;
      l1.push_front(1) ; // inserting element of begining
      l1.push_front(2) ;
      l1.push_back(3) ;
      l1.push_back(4) ; // inserting the element at end
      list <int > :: iterator p ;  // using iterator at end of list
      p = l1.begin() ;
      while(p != l1.end())
      {
          cout << *p <<"->" ;
          p++ ;
      }
      cout << endl ;
      cout << "size of list is : " << l1.size();
      l1.pop_back() ; // deleting the element at end
      cout << endl ;
      cout << "size of list is : " << l1.size() << endl ;
      cout << "The end element of list is : " <<*(l1.end()) << endl ;
      cout << "The first element of list is :" << *(l1.begin()) << endl ;
      cout << "Using the list of string " << endl  ;
      list <string> strList ;
      strList.push_front("shivam");
      strList.push_front("Aaksh");
      strList.push_front("Anupam");
      list <string> :: iterator  p2;
      p2 = strList.begin() ;
      cout << "Printing the list of String "<<endl ;
      while(p2!= strList.end())
      {
          cout << *p2 << "->" ;
          p2++ ;

      }



 }
