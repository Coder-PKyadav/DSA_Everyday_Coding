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
    // Count paths starting FROM this specific node
    int helper(TreeNode* root, long targetSum) {
        if (root == NULL) return 0;

        int cnt = 0;
        if (root->val == targetSum) cnt++;

        cnt += helper(root->left,  targetSum - root->val);
        cnt += helper(root->right, targetSum - root->val);
        return cnt;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return 0;

        // Paths starting from root
        //   + paths starting from any node in left subtree
        //   + paths starting from any node in right subtree
        return helper(root, targetSum)
             + pathSum(root->left,  targetSum)   // ✅ NEW
             + pathSum(root->right, targetSum);  // ✅ NEW
    }
};