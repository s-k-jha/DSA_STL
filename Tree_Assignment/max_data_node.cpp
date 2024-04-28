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



//main
int main(){
    Node*root=takeInputLevelWise();
    printTreeLevelWise(root);
    cout<<"\n";
}