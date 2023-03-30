#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
bool isPalindrome(ListNode* head) {
        ListNode *fast = head->next;
        ListNode *slow = head;
        if(head->next == NULL)
        {
            return true;
        }
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
       cout<<slow->val<<endl;
        ListNode *dum = NULL;
        ListNode *temp = slow->next;
        while(temp!=NULL)
        {
            ListNode *next = temp->next;
            temp->next = dum;
            dum = temp;
            temp = next;
        }
        slow->next = dum;
        ListNode *head1 = head;
        ListNode *head2 = slow->next;
        while(head2!=NULL)
        {
            if(head1->val!=head2->val)
            {
                return false;
            }
            else{
                head1 = head1->next;
                head2 = head2->next;
            }
        }

        return true;

    }
int main()
{
  return 0;
  
}