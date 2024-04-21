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

    int number_of_childs;
    cout<<"Enter no of children's "<<endl;
    cin>>number_of_childs;

    for(int i=0; i<number_of_childs; i++){
        Node * child= takeInput();
        root->children.push_back(child);
    }
    return root;
}
int main(){
        //calling input function 
        Node *root = takeInput();
        //calling print function
        printTree(root);

}