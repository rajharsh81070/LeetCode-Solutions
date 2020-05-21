/*
Question Link :- https://leetcode.com/problems/add-two-numbers/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *p = l1;
    ListNode *q = l2;
    int carry = 0;
    ListNode *Ans = new ListNode();
    ListNode *curr = Ans;
    while (q != NULL || p != NULL)
    {
      int val1 = (p != NULL) ? p->val : 0;
      int val2 = (q != NULL) ? q->val : 0;
      // cout << val1 << " " << val2 << " " ;
      int sum = val1 + val2 + carry;
      curr->next = new ListNode(sum % 10);
      curr = curr->next;
      carry = sum / 10;
      p = (p != NULL) ? p->next : p;
      q = (q != NULL) ? q->next : q;
    }
    if (carry)
    {
      curr->next = new ListNode(1);
      curr = curr->next;
    }
    Ans = Ans->next;
    return Ans;
  }
};