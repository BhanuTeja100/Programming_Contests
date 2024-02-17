class Solution
{
    public:
         int dfs(Node *root){
           if(!root) return 0;
           
           if(!root->left && !root->right) return root->data;
           
           return dfs(root->left) + dfs(root->right);
        }
       
        int sumOfLeafNodes(Node *root ){
   
             return dfs(root);
        }
};