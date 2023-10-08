/*
 https://leetcode.com/problems/path-sum
*/

 bool hasPathSum(TreeNode* root, int targetSum) {

        if(root==NULL) return false;
        if(root->val-targetSum==0 && root->left==NULL && root->right==NULL) return true;
        
        return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);
    }