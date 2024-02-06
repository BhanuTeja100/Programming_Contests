class Solution
{
    public:
    
    void dfs(Node* root, int k, set<int> &st, int ind, int x){
    
        if(root == NULL) return;
        
        if((root->left == NULL && root->right == NULL) && ind == k){
            st.insert(x);
        }
        
        dfs(root->left, k, st, ind+1, x);
        dfs(root->right, k, st, ind+1, x);
    } 
    //Function to return count of nodes at a given distance from leaf nodes.
int printKDistantfromLeaf(Node* root, int k)
    {
    	 set<int> st;
    	 
    	 if(root == NULL){
    	     return st.size();
    	 }
    	 
    	 dfs(root, k, st, 0, root->data);
    	 
    	 int lRes = printKDistantfromLeaf(root->left, k);
    	 int rRes = printKDistantfromLeaf(root->right, k);
    	 
    	 return st.size() + lRes + rRes;
    }
};