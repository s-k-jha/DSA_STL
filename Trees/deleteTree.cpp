/*
//WAY -1

void deleteTree(TreeNode*root){
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);
    }
    delete root;
}

*/

//WAY -2
//ANOTHER WAY IS TO WRITE DESTRUCTOR IN CLASS TREENODE TEMPLATE

/*

~TreeNode() {
    for(int i=0;i < root->children.size();i++){
        delete children[i];
    }
}

*/

// after using this you don't need to write the function of delete node 
// you can directly call delete root and it will call destructor