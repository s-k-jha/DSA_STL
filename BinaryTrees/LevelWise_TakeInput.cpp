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
//TAKE INPUT LEVEL WISE
BinaryTreeNode* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;

    }
    BinaryTreeNode* root = new BinaryTreeNode(rootData);
    queue<BinaryTreeNode*>pendingNodes;                  //queue 
    pendingNodes.push(root);

    while(pendingNodes.size()!= 0){
        BinaryTreeNode* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"enter left child of "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            BinaryTreeNode*child = new BinaryTreeNode(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }
        cout<<"enter right child of"<<front->data<<endl;
        int rightChildData;
        if(rightChildData!= -1){
            BinaryTreeNode* child = new BinaryTreeNode(rightChildData);
            front->right= child;
            pendingNodes.push(child);
        }
    }
    return root;

}
//main program
int main(){
    
    BinaryTreeNode * root = takeInputLevelWise();
    printTree(root);

}