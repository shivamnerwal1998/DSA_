#include <iostream>
using namespace std;

void solublity(int x , int a , int b)
{
    long sol = (a +( (100 - x) * b) ) * 10 ;
    cout << sol<< "\n" ;
}
int main() {
	// your code goes here
	int T ;
	scanf("%d",&T) ;
	while( (T--) > 0  )
	{
	    int x ;
	    scanf("%d",&x) ;
	    int a ;
	    scanf("%d",&a) ;
	    int b ;
	    scanf("%d",&b) ;
	    solublity(x,a,b) ;

	}
	return 0;
}

