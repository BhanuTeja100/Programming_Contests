class Solution
{
    public:
    
    void dfs(Node *root, int sum, int target, vector<int>& tmp, vector<vector<int>>& sol){
        if(!root) return;
        
        tmp.push_back(root->key);
        
        if(sum + root->key == target){
            sol.push_back(tmp);
        }
        
        dfs(root->left, sum+root->key, target, tmp, sol);
        
        dfs(root->right, sum+root->key, target, tmp, sol);
        
        tmp.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        vector<vector<int>> sol;
        
        vector<int> tmp;
        
        dfs(root, 0, sum, tmp, sol);
        
        return sol;
    }
};