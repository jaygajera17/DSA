/* https://leetcode.com/problems/binary-tree-maximum-path-sum/description/ */

 int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        func(root,maxi);
        return maxi;
        
    }

    int func(TreeNode* root,int &maxi)
    {
        if(!root) return 0;
        int left_sum=max(0,func(root->left,maxi));
        int right_sum=max(0,func(root->right,maxi));
        maxi=max(maxi,left_sum+right_sum+root->val);
        return root->val+max(left_sum,right_sum);
    }