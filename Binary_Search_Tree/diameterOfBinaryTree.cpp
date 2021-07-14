/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {  
public:
    int height( TreeNode *root ){
        
        if( root == NULL ) return 0 ;
        int left = height( root->left ) ;
        int right = height( root->right ) ;
        return left > right ? left+1 : right + 1 ; 

        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if( root == NULL ) return 0 ; 
        
        int leftHeight = height( root->left ) ;
        int rightHeight = height( root->right ) ; 
        
        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree( root->right) ;
        
        return max( leftHeight + rightHeight , max( ld , rd ) ) ;
        
        
    }
};
