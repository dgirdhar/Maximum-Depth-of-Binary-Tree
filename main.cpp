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
    int getDepth(TreeNode* root, int parentDepth) {
        int depth = parentDepth;
        
        if (root != nullptr) {
            depth += 1;
            
            int leftNodeDepth = getDepth(root->left, depth);
            int rightNodeDepth = getDepth(root->right, depth);
            
            depth = leftNodeDepth > rightNodeDepth ? leftNodeDepth : rightNodeDepth;
        }
        
        return depth;
    }
    int maxDepth(TreeNode* root) {
        int depth = 0;
        
        depth = getDepth(root, depth);
        
        return depth;
    }
};
