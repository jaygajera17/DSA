
/*
https://practice.geeksforgeeks.org/problems/floor-in-bst/1
*/
int findCeil(Node* root, int key) {
    if (root == NULL) return -1;
    int ceil=-1;
    while(root)
    {
        if(root->data==key) 
        {
            ceil=root->data;
            return ceil;
        }
        if(key>root->data)
        {
            root=root->right;
        }
        else
        {
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil;
    // Your code here
}


int floor(Node* root, int key) {
    // Code here
     // if (root == NULL) return -1;
    int floor=-1;
    while(root)
    {
        if(root->data==key) 
        {
            floor=root->data;
            return floor;
        }
        if(key>root->data)
        {
            floor=root->data;
            root=root->right;
            
        }
        else
        {
            
            root=root->left;
        }
    }
    return floor;
}
