class Solution
{
    public:
     int helper(Node* root, int &result){
        if(!root) return 0;
        
        int left = helper(root->left, result);
        int right = helper(root->right, result);
        
        result += abs(left) + abs(right);
        
        return root->key - 1 + left + right;
    }
    
    int distributeCandy(Node* root)
    {
        int result = 0;
        helper(root, result);
        
        return result;
    }
};