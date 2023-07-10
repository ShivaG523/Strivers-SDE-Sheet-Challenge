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
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
      int ans1=1+minDepth(root->left);
        int ans2=1+minDepth(root->right);
        int ans3=min(ans1,ans2);
         int ans4=max(ans1,ans2);
        if(ans3==1)
            return ans4;
        else
            return ans3;
                                                 
    
    }
};