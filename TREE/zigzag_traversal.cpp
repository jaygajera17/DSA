/* https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/ */

 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;

        queue<TreeNode*>q;
        q.push(root);
        bool left_to_right=true;

        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;

            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->val);
                 
            }
            if(left_to_right==false)
            {
                reverse(level.begin(),level.end());
                res.push_back(level);
                left_to_right=true;
            }
            else
            {
                res.push_back(level);
                left_to_right=false;
            }
        }
        return res;
    }