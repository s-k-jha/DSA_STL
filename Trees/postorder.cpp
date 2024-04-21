/**

void postorder(TreeNode*root){
    
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }

    cout<<root->data<<endl;
}

*/