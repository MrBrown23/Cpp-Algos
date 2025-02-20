#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;

}

void print_dfs(Node *root)
{
    if(root == nullptr)
    {
        cout << "<Empty>" << endl;
        return;
    }
    
    cout << "Value " << root->data << endl;
    cout << "Left of " << root->data << endl;
    print_dfs(root->left);
    cout << "Right of " << root->data << endl;
    print_dfs(root->right);
}

int main()
{
    Node* root = createNode(1);
    Node *n1 = createNode(2);
    Node *n2 = createNode(3);
    Node *n3 = createNode(4);

    root->left = n1;
    root->right = n2;
    n1->left = n3;

    print_dfs(root);

    return 0;
}