/*
  https://practice.geeksforgeeks.org/problems/root-to-leaf-paths/1
*/

 
 void solve(Node*root ,vector<vector<int>>&v,vector<int>temp)
{
    temp.push_back(root->data);
    if(root->left!=NULL) solve(root->left,v,temp);
    if(root->right!=NULL) solve(root->right,v,temp);
    if(root->left==NULL && root->right==NULL) v.push_back(temp);
    
}

vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>>v;
    vector<int>temp;
    solve(root,v,temp);
    return v;
}