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

//main program
int main(){
    BinaryTreeNode*root = new BinaryTreeNode(1);
    BinaryTreeNode*node1 = new BinaryTreeNode(2);
    BinaryTreeNode*node2 = new BinaryTreeNode(3);
    root->left= node1;
    root->right= node2;
    printTree(root);

}