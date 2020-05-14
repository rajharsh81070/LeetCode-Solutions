/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
  bool isSameParent(TreeNode *root, int x, int y)
  {
    if (root == NULL)
      return false;
    if (root->left == NULL && root->right == NULL)
      return false;
    if (root->left != NULL && root->right != NULL)
    {
      int left = root->left->val;
      int right = root->right->val;
      if ((left == x && right == y) || (left == y && right == x))
        return true;
    }
    return isSameParent(root->left, x, y) || isSameParent(root->right, x, y);
  }
  int level(TreeNode *root, int x)
  {
    if (root == NULL)
      return INT_MIN;
    if (root->val == x)
      return 0;
    return max(1 + level(root->left, x), 1 + level(root->right, x));
  }
  bool isCousins(TreeNode *root, int x, int y)
  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (root == NULL)
      return false;
    int x_l = level(root, x);
    int y_l = level(root, y);
    if (x_l == y_l && !isSameParent(root, x, y))
      return true;
    return false;
  }
};