// iterative way using two stacks
class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st1;
        stack<TreeNode *> st2;
        st1.push(root);
        vector<int> ans;
        if (root == NULL)
            return ans;
        while (!st1.empty())
        {
            TreeNode *node = st1.top();
            st2.push(node);
            st1.pop();
            if (node->left != NULL)
            {
                st1.push(node->left);
            }
            if (node->right != NULL)
            {
                st1.push(node->right);
            }
        }

        while (!st2.empty())
        {
            TreeNode *stTop = st2.top();
            ans.push_back(stTop->val);
            st2.pop();
        }
        return ans;
    }
};