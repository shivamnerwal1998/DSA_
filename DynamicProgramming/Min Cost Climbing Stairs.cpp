/*

You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

 

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: Cheapest is: start on cost[1], pay that cost, and go to the top.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: Cheapest is: start on cost[0], and only step on 1s, skipping cost[3].



*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        if( cost.size() == 0 ) return 0  ;
        else if( cost.size() == 1 ) return cost[0] ; 
        int len = cost.size() ; 
        int secondLast = cost[0] ;  
        int last = cost[1] ;
        int minCost = 0  ; 
        for( int i = 2 ; i < len ; i++ ) {
            minCost = cost[i] + min( secondLast , last  ) ;
            secondLast = last ; 
            last = minCost ; 
        }
        
        return min( secondLast , last ) ; 
    }
};