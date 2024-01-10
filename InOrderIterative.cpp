// iterative way
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st;
        vector<int> ans;
        TreeNode *Node = root;

        while (true)
        {
            if (Node != NULL)
            {
                st.push(Node);
                Node = Node->left;
            }
            else
            {
                if (st.empty())
                    break;

                Node = st.top();
                st.pop();
                ans.push_back(Node->val);
                Node = Node->right;
            }
        }
        return ans;
    }
};