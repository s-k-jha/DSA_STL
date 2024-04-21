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

void printTreeLevelWise(TreeNode *root) {
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
    
        for (int i = 0; i < levelSize; i++) {
            TreeNode *front = q.front();
            q.pop();

            cout << front->data <<" ";

            for (TreeNode* child : front->children) {
                q.push(child);
            }
            
        }
        cout << endl; // Move to the next level
    }
}

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
            cout << " enter " << i << " th "<< " child of " << front->data << endl;
            cin >> child;

            TreeNode *chotu = new TreeNode(child);
            front->children.push_back(chotu);
            pendingNodes.push(chotu);
        }
    }
    return root;
}


int numberOfnodes(TreeNode*root){
    int count=1;
    for(int i=0; i < root->children.size();i++){
        count+= numberOfnodes(root->children[i]);
    }
    return count;
}
int main()
{
    TreeNode *root = takeInputLevelWise();
    printTreeLevelWise(root);

    cout<<numberOfnodes(root);
}