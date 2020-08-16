/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* res;
    bool lca(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool left,right;
        if(root == nullptr) return false;
        left = lca(root->left, p, q);
        right = lca(root->right, p, q);
        if((left && right) ||((root->val == p->val || root->val == q->val) && (left || right)))
            res = root;
        return left || right || (root->val == p->val) || (root->val == q->val);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr) return nullptr;
        lca(root,p,q);
        return res;
        
    }
};
// @lc code=end

