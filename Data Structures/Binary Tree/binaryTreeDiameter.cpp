class Solution {
    pair<int, int> dfs(TreeNode* root){
        if(!root) return {0,0};
        //diameter, depth         
        pair<int, int> left = dfs(root -> left);
        pair<int, int> right = dfs(root -> right);
        
        int diameter = max({left.first, right.first,left.second + right.second});
        
        return {diameter, max(left.second, right.second) + 1};
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return dfs(root).first;
    }
};