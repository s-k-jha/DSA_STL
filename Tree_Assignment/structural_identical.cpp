#include<bits/stdc++.h>
using namespace std;
//node class
class Node{
    public:
    int data;
    vector<Node*> children;
    Node(int data){
        this->data=data;
    }
};

// print 
void printTreeLevelWise(Node* root){
    queue<Node*>q;
    q.push(root);
    while (!q.empty())      
    {
        int size = q.size();
       for(int i=0;i<size;i++){
        Node*front=q.front();
        q.pop();
        cout<<front->data<<" ";
        for( Node*child : front->children){
            q.push(child);
        }
       }
       cout<<endl;
    }

}

// takeinput

Node * takeInputLevelWise(){
    int rootData;
    cout<<"enter root Data"<<endl;
    cin>>rootData;
    Node* root = new Node(rootData);
    queue<Node*>pending;
    pending.push(root);
    
    while(!pending.empty()){
        Node*front= pending.front();
        pending.pop();
        int childNum;
        cout<<"enter number of children's of "<<front->data<<endl;
        cin>>childNum;
        for(int i=0;i< childNum;i++){
            int childNum_val;
            cout<<"enter "<<i<<"th"<<"child node of "<<front->data<<endl;
            cin>>childNum_val;
            Node*childNode= new Node(childNum_val);
            front->children.push_back(childNode);
            pending.push(childNode);
        }
    }
    return root;
}
bool structural_identical(Node* root1, Node* root2) {
    if (root1 == nullptr && root2 == nullptr) {
        return true;
    }
    if (root1 == nullptr || root2 == nullptr) {
        return false;
    }
    if (root1->children.size() != root2->children.size()) {
        return false;
    }
    for (int i = 0; i < root1->children.size(); i++) {
        Node* child1 = root1->children[i];
        Node* child2 = root2->children[i];
        if (!structural_identical(child1, child2)) {
            return false;
        }
    }
    return true;
}



//main
int main(){
    Node*root1=takeInputLevelWise();cout<<"\n";
    Node*root2=takeInputLevelWise();cout<<"\n";

    printTreeLevelWise(root1);cout<<"\n";
    cout<<structural_identical(root1, root2);
    cout<<"\n";
}