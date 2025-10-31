**
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
int diameterOfBinarytree(TreeNode* node, int& diameter) {
    if(node == nullptr) return 0;
    
    int left_height = diameterOfBinarytree(node->left, diameter);
    int right_height = diameterOfBinarytree(node->right, diameter);
    diameter = max(diameter, left_height + right_height);
    return max(left_height, right_height) + 1;
}

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        diameterOfBinarytree(root, diameter);
        return diameter;
        }
        
    
        
    
};

