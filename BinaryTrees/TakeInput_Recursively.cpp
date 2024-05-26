#include<bits/stdc++.h>
using namespace std;

//tree node structure
class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode* left ;
    BinaryTreeNode* right;

    BinaryTreeNode(int data){
        this->data= data;
        left = NULL;
        right= NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
 
//PRINT FUNCTION IN WELL MANNER
void printTree(BinaryTreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left != NULL){
        cout<<"L"<<root->left->data<<" ";
    }

    if(root->right != NULL){
        cout<<"R"<<root->right->data<<" ";

    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);

}
//TAKE INPUT FUNCTION USING RECURSIVE but this is not good because giving input is not easy for new user who does not understand recursion
BinaryTreeNode *takeInput(){
    int rootData;
    cout<<"enter data"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode*root = new BinaryTreeNode(rootData);

    BinaryTreeNode*leftChild = takeInput();
    BinaryTreeNode*rightChild = takeInput();

    root->left = leftChild;
    root->right= rightChild;

    return root;
}
//main program
int main(){
    
    BinaryTreeNode*root = takeInput();
    printTree(root);

}