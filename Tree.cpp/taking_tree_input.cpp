#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    vector<Node*>children;
    Node(int data){
        this->data=data;
    }
};

void printTree(Node*root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }

};

Node* takeInput(){
    int rootData;
    cout<<"enter root Data"<<endl;
    cin>>rootData;

    Node*root= new Node(rootData);

    int n;
    cout<<"Enter no of children's "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        Node * child= takeInput();
        root->children.push_back(child);
    }
    return root;
}
int main(){
        Node *root = takeInput();

        printTree(root);

}