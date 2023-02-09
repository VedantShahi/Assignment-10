class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector <vector<int>> ans;
        queue<TreeNode *> Q;
        if(root) Q.push(root);
        while(!Q.empty()){
            vector<int> X;
            int size=Q.size();
            while(size--){
            TreeNode *temp = Q.front();
            X.push_back(temp->val);
            //cout<<temp->data<<" ";
            if(temp->left) Q.push(temp->left);
            if(temp->right) Q.push(temp->right);
            Q.pop();
        }
        ans.push_back(X);
        }
        return ans;
        
    }
};
