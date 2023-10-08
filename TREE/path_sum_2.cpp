
/*
https://leetcode.com/problems/path-sum-ii/description/
*/


vector<vector<int>> paths;
    vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
        
        vector<int>path;
        findPaths(root,targetsum,path);
        return paths;
       
        
    }

  void findPaths(TreeNode* root,int targetsum,vector<int>path)
  {
       if(!root) return;
       path.push_back(root->val);
       if(root->val==targetsum && root->left==NULL && root->right==NULL)
        {
            paths.push_back(path);
        }
        
        findPaths(root->left,targetsum-root->val,path);
        findPaths(root->right,targetsum-root->val,path);
        
  }