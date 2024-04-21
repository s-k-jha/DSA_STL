#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    vector<Node*> children;
    //constructor
    Node(int data){
        this->data=data;
    }
};
void printTree(Node*root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    //recursive call
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
};
int main(){
    Node*root=new Node(1);
    Node*node1=new Node(2);
    Node*node2=new Node(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    printTree(root);
}