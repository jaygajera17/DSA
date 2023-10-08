/*

https://leetcode.com/problems/evaluate-boolean-binary-tree/

*/


bool solve(TreeNode* root)
    {
        if(root->left == NULL && root->right == NULL)
            return root->val;
        
        bool left = solve(root->left);
        bool right = solve(root->right);
        
        if(root->val == 2)
            return left | right;
        
        else
            return left & right;
    }
    
    bool evaluateTree(TreeNode* root) {
        
        return solve(root);
    }