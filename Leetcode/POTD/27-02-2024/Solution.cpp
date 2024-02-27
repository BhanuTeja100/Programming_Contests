class Solution {
public:
    int height(TreeNode* root, int &max_dia){
      if(root == NULL) return 0;

      int lh = height(root->left, max_dia);
      int rh = height(root->right, max_dia);
      
      max_dia = max(lh+rh, max_dia);
      
      return max(lh, rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int  max_dia = 0;
        height(root, max_dia);

        return max_dia;


    }
};