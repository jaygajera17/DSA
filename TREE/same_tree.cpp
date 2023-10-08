/* https://leetcode.com/problems/same-tree/ 
*/

 bool isSameTree(TreeNode* a, TreeNode* b) {
        
        if(a==NULL && b==NULL)
        {
          return 1;
        }
        if(a!=NULL && b!=NULL)
        {
          return(a->val==b->val && isSameTree(a->left,b->left) && isSameTree(a->right,b->right));
        }
        return 0;
    }