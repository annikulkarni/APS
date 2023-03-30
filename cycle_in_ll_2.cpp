#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode *solve(ListNode *head)
    {
       ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = solve(head);
        if(temp==NULL)
        {
            return NULL;
        }
        ListNode *start = head;
        while(start!=temp)
        {
            start = start->next;
            temp = temp->next;
        }
        return start;
    }
};
int main()
{
    return 0;
}