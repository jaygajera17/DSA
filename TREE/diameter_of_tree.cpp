/*
  https://leetcode.com/problems/diameter-of-binary-tree/
*/


int diameterOfBinaryTree(TreeNode* root)
    {
    int maxi=0; //diameter
    height(root,maxi);
    return maxi;
    }
    
    int height(TreeNode* root,int &maxi)
{
    if(!root) return 0 ;
    int lh=height(root->left,maxi);
    int rh=height(root->right,maxi);
    maxi=max(maxi,lh+rh);
    return 1+max(lh,rh);
    
}