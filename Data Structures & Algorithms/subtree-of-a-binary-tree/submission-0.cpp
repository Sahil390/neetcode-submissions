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

bool isequal(TreeNode* root, TreeNode* subRoot)
{
    if(root == subRoot && root == nullptr) return true;
    if(root == nullptr || subRoot == nullptr) return false;

    if(root->val == subRoot->val)
    {
        if(isequal(root->left,subRoot->left) && isequal(root->right,subRoot->right)) return true;
    }
    return false;
}
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr) return true;
        if(root == nullptr) return false;

        if(root->val == subRoot->val) 
        {
            if(isequal(root,subRoot)) return true;
        }
        if (isSubtree(root->left,subRoot)) return true;
        else if(isSubtree(root->right,subRoot)) return true;
        else return false;
    }
};
