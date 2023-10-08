/*
https://leetcode.com/problems/symmetric-tree/description/
*/

 bool isSymmetric(TreeNode* root) {
        return root==NULL || help(root->left,root->right);
    }

    bool help(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL) return true;
        else if(p==NULL || q==NULL) return false;

        else if(p->val!=q->val) return false;

        return help(p->left,q->right) && help(p->right,q->left);


    }