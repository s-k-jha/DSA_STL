#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    vector<TreeNode*>children;
    TreeNode(int data){
        this->data=data;
    }
};
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

            TreeNode *child_node = new TreeNode(child);
            front->children.push_back(child_node);
            pendingNodes.push(child_node);
        }
    }
    return root;
}

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

int heightOfTree(TreeNode*root){
     if (root == nullptr) {
        return 0; 
    }
     int maxHeight = 0; 

    for (int i = 0; i < root->children.size(); i++) {
        int childHeight = heightOfTree(root->children[i]);
        if (childHeight > maxHeight) {
            maxHeight = childHeight;
        }
    }
    return maxHeight + 1;
}

int main()
{
    TreeNode*root = takeInputLevelWise();
    printTreeLevelWise(root);
    cout<<endl;
    cout<<heightOfTree(root);
}
