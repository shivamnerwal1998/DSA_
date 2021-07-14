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
    
  bool isSibling(TreeNode* root, int a,
                             int b)
{
    if (!root)
        return false;
 
    if (root->left && root->right) {
        int left = root->left->val;
        int right = root->right->val;
 
        if (left == a && right == b)
            return true;
        else if (left == b && right == a)
            return true;
    }
 
    if (root->left)
        if(isSibling(root->left, a, b))
          return true;
 
    if (root->right)
        if(isSibling(root->right, a,
                                b))
          return true;
      return false; 
}
    
    int level( TreeNode *root , int a , int level_count )
    {
        if( root == NULL ) return 0 ; 
        if (root-> val == a)  
            return level_count ; 
        
        
            int l = level( root->left , a , level_count+1  ) ;
            if( l != 0 ) return l ;
            
        return level( root->right , a , level_count+1 ) ;
        
        
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        if( !isSibling( root , x , y ) && (level( root , x , 0  ) == level(root, y , 0 ) ) )
            return true ; 
        
        return false ;
        
    }
    
};
