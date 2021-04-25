#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string s1 ; // default constructor is called;
    string s2("Hello World") ;
    string s3 = "hello world " ;
    string s4 = s3 ;
    /*
        in S1,S2,S3 parametrised constructor is called
    */
    cout << "s1:"<< s1<<"\n" ;
    cout << "s2:" <<s2<<"\n";
    cout << "s3:"<<s3<<"\n" ;
    cout << "s4:"<<s4<<"\n" ;

    /** assign() method  **/
// used to assign a method in string
    s1.assign("SHIVAM") ;
    cout << s1 <<"\n" ;
    /** append() method **/
// to append a value in string
    s1.append("How are you ") ;
    cout << s1<<"\n" ;
    /** insert() method **/
/* used to insert a character or string at a
 specific     position*/
 s1.insert(2,"1234");
 cout << s1<<"\n" ;



    return 0 ;
}
