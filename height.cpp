int height(Node* root) {
        if(root == NULL){
            return 0;
        }
        else{
        int left=0;
        int right=0;
        if(root->left!=NULL)
        {
            left=height(root->left);
             left++;
        }
         if(root->right!=NULL)
         {
             right=height(root->right);
             right++;
         }
        
        
        if(left>right){
            return left;
        }
        else{
            return right;
        }
        }
    }
