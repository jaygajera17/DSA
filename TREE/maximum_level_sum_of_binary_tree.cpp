/*  https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/ */

 int maxLevelSum(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
       int maxi=INT_MIN,global_sum=INT_MIN,level=0,index=0;
        while(!q.empty())
        {
            int size=q.size();
            int temp_sum=0;
            //vector<int>temp;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                temp_sum+=node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
               
            }
            level++;
            if(temp_sum>global_sum) index=level;
            global_sum=max(temp_sum,global_sum);

        }
       return index;
    }