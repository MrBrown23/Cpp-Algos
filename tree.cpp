#include <iostream>

using namespace std;


class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
};

void print_df(TreeNode* root)
{
    if(root == nullptr)
    {
        cout << "====================<Empty>===================" << endl;
    }
    cout << "Value: " << root->data << endl;
    cout << "Left of " << root->data << endl;
    print_df(root->left);
    cout << "Right of " << root->data << endl;
    print_df(root->right);

}

TreeNode* createnode(int value)
{
    TreeNode* newnode = new TreeNode();
    newnode->data = value;
    newnode->left = nullptr;
    newnode->right = nullptr;
    return newnode;
}

int main()
{
    

    return 0;
}