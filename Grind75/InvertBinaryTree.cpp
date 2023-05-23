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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *temp; 
        if(root == nullptr)
            return root; 
        temp = root->right;
        root->right = root->left;
        root->left = temp;
        invertTree(root->left); 
        invertTree(root->right);
        return root; 
    }
};

// Runtime: 3ms
// Memory: 9.6MB
