
/*
https://leetcode.com/problems/path-sum-iii/description/
*/

long long int count=0;
    int pathSum(TreeNode* root, int targetSum) {
        if(root)
        {
           help(root,targetSum);
           pathSum(root->left,targetSum);
           pathSum(root->right,targetSum);
        }
        return count;  
    }

   void help(TreeNode* root, long long int targetSum){
       if(root==NULL) return;
        if(targetSum==root->val) {count++; }
        help(root->left,targetSum-root->val);
        help(root->right,targetSum-root->val);
    }