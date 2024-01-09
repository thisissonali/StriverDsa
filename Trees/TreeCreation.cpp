#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preOrderTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->val);
    preOrderTraversal(root->left, ans);
    preOrderTraversal(root->right, ans);
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    Node *root = new Node(arr[0]);
    root->left = new Node(arr[1]);
    root->right = new Node(arr[2]);
    root->left->left = new Node(arr[3]);
    root->left->right = new Node(arr[4]);

    vector<int> ans;
    preOrderTraversal(root, ans);

    for (auto a : ans)
    {
        cout << a << " ";
    }

    return 0;
}
