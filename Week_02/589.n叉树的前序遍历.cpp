/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    //递归方法：vector<int> ans;
    vector<int> preorder(Node* root) {
    //     if(root == nullptr) return ans;
    //     ans.push_back(root->val);
    //     for(int i=0;i < root->children.size();i++) {
    //         preorder(root->children[i]);
    //     }
    //     return ans;
    // }
    //非递归方法
        stack<Node*> s;
        vector<int> ans;
        Node* temp;
        if(root == nullptr) return ans;
        else s.push(root);
        while(!s.empty()) {
            temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            for(int i = temp->children.size()-1;i>=0;i--)
                s.push(temp->children[i]);
            
            
            
        }
        return ans;
  }
};
// @lc code=end

