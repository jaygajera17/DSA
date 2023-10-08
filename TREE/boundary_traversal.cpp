/* 

https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/0

 */

bool isLeaf(Node*root)
{
    if(root->left==NULL && root->right==NULL) return true;
    else return false;
}

   void addleftBoundary(Node*root,vector<int> &res)
   {
       Node* cur=root->left;
       while(cur)
       {
           if(!isLeaf(cur)) res.push_back(cur->data);
           if(cur->left) cur=cur->left;
           else cur=cur->right;
       }
   }
   
   void addrightBoundary(Node *root,vector<int>&res)
   {
       Node *cur=root->right;
       vector<int>v;
       while(cur)
       {
           if(!isLeaf(cur)) v.push_back(cur->data);
           if(cur->right) cur=cur->right;
           else cur=cur->left;
           
       }
       for(int i=v.size()-1;i>=0;i--)
       {
           res.push_back(v[i]);
       }
   }
   
   void addLeaves(Node * root , vector<int>&res)
   {
       if(isLeaf(root))
       {
           res.push_back(root->data);
           return;
       }
       if(root->left) addLeaves(root->left,res);
       if(root->right) addLeaves(root->right,res);
   }
  
    vector <int> boundary(Node *root)  //main func
    {
        //Your code here
        vector<int>res;
        if(!root) return res;
        if(!isLeaf(root)) res.push_back(root->data);
        addleftBoundary(root,res);
        addLeaves(root,res);
        addrightBoundary(root,res);
        return res;
    }