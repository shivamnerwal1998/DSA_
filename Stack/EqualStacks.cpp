// Hacker Rank  -> Equal stack 

/*
You have three stacks of cylinders where each cylinder has the same diameter, but they may vary in height. You can change the height of a stack by removing and discarding its topmost cylinder any number of times.

Find the maximum possible height of the stacks such that all of the stacks are exactly the same height. This means you must remove zero or more cylinders from the top of zero or more of the three stacks until they are all the same height, then return the height.

Example




There are  and  cylinders in the three stacks, with their heights in the three arrays. Remove the top 2 cylinders from  (heights = [1, 2]) and from  (heights = [1, 1]) so that the three stacks all are 2 units tall. Return  as the answer.

Note: An empty stack is still a stack.

Function Description

Complete the equalStacks function in the editor below.

equalStacks has the following parameters:

int h1[n1]: the first array of heights
int h2[n2]: the second array of heights
int h3[n3]: the third array of heights
Returns

int: the height of the stacks when they are equalized
Input Format

The first line contains three space-separated integers, , , and , the numbers of cylinders in stacks , , and . The subsequent lines describe the respective heights of each cylinder in a stack from top to bottom:

The second line contains  space-separated integers, the cylinder heights in stack . The first element is the top cylinder of the stack.
The third line contains  space-separated integers, the cylinder heights in stack . The first element is the top cylinder of the stack.
The fourth line contains  space-separated integers, the cylinder heights in stack . The first element is the top cylinder of the stack.
Constraints

Sample Input

STDIN       Function
-----       --------
5 3 4       h1[] size n1 = 5, h2[] size n2 = 3, h3[] size n3 = 4  
3 2 1 1 1   h1 = [3, 2, 1, 1, 1]
4 3 2       h2 = [4, 3, 2]
1 1 4 1     h3 = [1, 1, 4, 1]
Sample Output

5
Explanation

Initially, the stacks look like this:

initial stacks

To equalize thier heights, remove the first cylinder from stacks  and , and then remove the top two cylinders from stack  (shown below).

modified stacks

The stack heights are reduced as follows:

All three stacks now have , the value to return.
  
*/
stack<int> initializeStack(vector<int> h)
{
    stack<int> st ;
    int height = 0 ; 
    for( int i = h.size()-1 ; i >= 0  ; i-- )
    {
        height += h[i] ; 
        st.push(height) ; 
        
    }
    return st ;
    
}

int findLargest( int h1 , int h2 , int h3 )
{
    int largest = ( (h1 > h2) ? h1 : h2 ) ; 
    return (largest > h3 ? largest : h3) ; 
    
}
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    
    stack<int> stack_1 ; 
    stack<int> stack_2 ;
    stack<int> stack_3 ; 
     
    stack_1 = initializeStack(h1) ;
    stack_2 = initializeStack(h2) ; 
    stack_3 = initializeStack(h3) ; 
        int h_1 = 0 , 
            h_2 = 0 ,
            h_3 = 0 ;
        
    while( 1 )
    {
        if( stack_1.empty() || stack_2.empty() ||  stack_3.empty( ) ) break ; 
        
        h_1 = stack_1.top() ; 
        h_2 = stack_2.top(); 
        h_3 = stack_3.top(); 
        
          
        
        if( h_1 == h_2 && h_1 == h_3 ) return h_1 ; 
        
        int largest = findLargest( h_1 , h_2 , h_3 ) ;
        
        if( largest == h_1 ) stack_1.pop() ; 
        
        else if( largest == h_2 ) stack_2.pop();
         
        else if( largest == h_3 ) stack_3.pop() ;  
        
    
    }
    return 0 ; 
     

}
