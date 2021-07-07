/*
  108. Convert Sorted Array to Binary Search Tree
Easy

4265

292

Add to List

Share
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

 

Example 1:


Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:

Example 2:


Input: nums = [1,3]
Output: [3,1]
Explanation: [1,3] and [3,1] are both a height-balanced BSTs.
*/
class Solution {
public: TreeNode* createTree( vector<int>& arr , int left , int right ){
    if( left > right )return NULL ;
    else
    {
        int mid = left + (right - left)/2 ; 
        TreeNode *Node = new TreeNode( arr[mid] );
        Node->left = createTree( arr , left , mid-1 ) ;
        Node->right = createTree( arr, mid+1 , right ) ;
        return Node ; 
    }
      
    
} 
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if( nums.size()  == 0) return NULL;
        TreeNode* node =  createTree( nums , 0 , nums.size()-1 ) ;
 
        return node ; 
        
    }
};
