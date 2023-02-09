class Solution {
public:
    void inorderPushInVector(TreeNode* root,vector<int> &A){
        if(!root) return;
        inorderPushInVector(root->left,A);
        A.push_back(root->val);
        inorderPushInVector(root->right,A);
    }

     
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> A;
        inorderPushInVector(root, A);
        return A;
    }
};
