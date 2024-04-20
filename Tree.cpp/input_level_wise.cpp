#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    vector<TreeNode *> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};

void printTree(TreeNode *root)
{
    cout << root->data << ":";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

// TreeNode* takeInput(){
//     int rootData;
//     cout<<" enter root Data"<<endl;
//     cin>>rootData;
//     TreeNode*root=new TreeNode(rootData);
//     int numchild;
//     cout<<"enter number of child of "<<root->data<<endl;
//     cin>>numchild;
//     for(int i=0;i<numchild;i++){
//      TreeNode*chotu=takeInput();
//      root->children.push_back(chotu);
//     }
//     return root;
// };
TreeNode *takeInputLevelWise()
{
    int rootData;
    cout << "enter the root data" << endl;
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);
    queue<TreeNode *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode *front = pendingNodes.front();
        pendingNodes.pop();
        // now time to take input of front's childrens

        cout << "enter no. of children of " << front->data << endl;
        int childnum;
        cin >> childnum;
        for (int i = 0; i < childnum; i++)
        {
            int child;
            cout << " enter " << i << " th "
                 << " child of " << front->data << endl;
            cin >> child;

            TreeNode *chotu = new TreeNode(child);
            front->children.push_back(chotu);
            pendingNodes.push(chotu);
        }
    }
    return root;
}
int main()
{
    TreeNode *root = takeInputLevelWise();
    printTree(root);
}