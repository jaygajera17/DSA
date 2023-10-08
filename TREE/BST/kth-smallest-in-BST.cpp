/*
  https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
*/


 int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        help(root,v);
        return v[k-1];
    }

    void help(TreeNode* root,vector<int>&v) //inorder traversal of BST gives sorted array
    {
        if(!root) return;
        help(root->left,v);
        v.push_back(root->val);
        help(root->right,v);
    }




//using counter reduces time complexity

int kthSmallest(TreeNode* root, int k) {
        //vector<int>v;
        int count=0;
        int result=-1;
        help(root,k,count,result);
       return result;
        //return v[k-1];
    }

    void help(TreeNode* root,int k,int &count,int &result)
    {
        if(!root) return ;
        help(root->left,k,count,result);
        count++;
        if(k==count) { result=root->val; return;}
        help(root->right,k,count,result);
        
    }