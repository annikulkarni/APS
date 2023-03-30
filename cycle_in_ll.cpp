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
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
      while(fast!=NULL&&fast->next!=NULL)
        {
           fast=fast->next->next;
           slow=slow->next;
           if(slow==fast) return true;
        }
        return false;
   
        // unordered_map<int,ListNode*> mp;
        // ListNode* ptr = head;
        // while(ptr!=NULL)
        // {
        //     mp.insert({ptr->val,ptr});
        //     if(mp.find(ptr->val)!=mp.end())
        //     {
        //         return true;
        //     }
        //     ptr=ptr->next;
        // }
        // return false;
    }
};
int main()
{
    return 0;
}