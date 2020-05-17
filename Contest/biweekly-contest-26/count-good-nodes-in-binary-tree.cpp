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
  int Ans;
  void countGoodNodes(TreeNode *root, int max)
  {
    if (root == NULL)
      return;
    if (root->val >= max)
    {
      max = root->val;
      Ans++;
    }
    if (root->left != NULL)
      countGoodNodes(root->left, max);
    if (root->right != NULL)
      countGoodNodes(root->right, max);
  }
  int goodNodes(TreeNode *root)
  {
    Ans = 0;
    int max = INT_MIN;
    countGoodNodes(root, max);
    return Ans;
  }
};