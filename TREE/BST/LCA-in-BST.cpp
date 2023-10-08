/*
  https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
*/

  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL) return NULL;
        int curr=root->val;
        if(curr<p->val && curr<q->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        if(curr>p->val && curr>q->val)
        {
             return lowestCommonAncestor(root->left,p,q);
        }
        return root;


    }