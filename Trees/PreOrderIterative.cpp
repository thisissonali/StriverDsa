// iterative
class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *stTop = st.top();
            ans.push_back(stTop->val);
            st.pop();

            if (stTop->right)
            {
                st.push(stTop->right);
            }

            if (stTop->left)
            {
                st.push(stTop->left);
            }
        }
        return ans;
    }
};