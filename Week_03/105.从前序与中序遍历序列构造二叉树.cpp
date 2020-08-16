/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
   map<int,int> index;
    TreeNode* bT(vector<int>& preorder, vector<int>& inorder, int pre_left, int pre_right, 
                  int in_left, int in_right) {
        int in_root,i,leftnum;
        TreeNode* r ;
        if(pre_left > pre_right) return nullptr;
        // for(i = in_left; i <= in_right; i++) {
        //     if(inorder[i] == preorder[pre_left]) break;
        // }
        
        in_root = index[preorder[pre_left]];
        //in_root = i;
        leftnum = in_root - in_left ;
        r = new TreeNode(preorder[pre_left]);
        r->left = bT(preorder, inorder,pre_left + 1,pre_left + leftnum, in_left, in_root - 1);
        r->right = bT(preorder, inorder, pre_left + leftnum + 1, pre_right, in_root + 1, in_right);
        return r;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* t;
        for(int i = 0; i < inorder.size(); i++) {
            index[inorder[i]] = i; 
        }
        t = bT(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
        return t;
    }
};
// @lc code=end

