#include<bits/stdc++.h>
using namespace std;
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
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       
     
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow = slow->next;

            fast = fast->next->next;
        }
        return slow;
    }
};
int main()
{
    return 0;
}