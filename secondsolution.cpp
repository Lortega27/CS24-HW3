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
int result = 0; 
int tiltHelper(TreeNode *root) {
    if(root ==nullptr) return 0;


    int left = tiltHelper(root->left);
    int right = tiltHelper(root->right);
    result += abs(left-right);
    return left + right + root->val;

}

public:
    int findTilt(TreeNode* root) {
    tiltHelper(root);
    return result;
    }
};
