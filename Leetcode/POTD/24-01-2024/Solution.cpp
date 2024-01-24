/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int res = 0;
    int values[10] = {0};

    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return res;
    }

    void dfs(TreeNode* root){
        if(root == NULL) return;

        values[root->val]++;
        
        if(!root->left && !root->right){
            if(isPolindrome()){
                res++;
            }
        }
        else{
            dfs(root->left);
            dfs(root->right);
        }
        values[root->val]--;

    }

    bool isPolindrome(){
        int oddVals = 0;
        for(int i=0;  i<10; i++){
            if(values[i] % 2){
                oddVals++;
            }
        }

        if(oddVals > 1) return false;

        return true;
    }
};