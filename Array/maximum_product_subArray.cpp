class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxSf = nums[0]  ,
            minSf = nums[0]  ,
            maxTh = nums[0]  ,
            preMax = nums[0] ;  
             
        for( int i = 1  ; i < nums.size() ; i++ )
        {
            preMax = maxSf ; 
            maxSf = max( { nums[i] , nums[i] * maxSf , nums[i] * minSf } )  ; 
            minSf = min( { nums[i] , nums[i] * preMax , nums[i] * minSf } ) ;
            maxTh = max( maxTh ,  maxSf ) ; 
                
        }
        return maxTh ; 
    }
};
