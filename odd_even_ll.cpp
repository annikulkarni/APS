#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
ListNode* oddEvenList(ListNode* head) {
        ListNode *o = NULL;
        ListNode *e = NULL;
        ListNode *odd = NULL;
        ListNode *even = NULL;
        int count = 1;
        while(head)
        {
            if((count)%2==1)
            {
                if(o==NULL)
                {
                    o = head;
                    odd = head;
                    
                }
                else{
                    
                    odd->next = head;
                    odd = odd ->next;
                    
                }
            }
            else{
                
                if(e == NULL)
                {
                    e = head;
                    even = head;
                }
                else{
                    even->next = head;
                    even = even ->next;
                }
                
            }
            head = head->next;
            count++;
        }
        if(e==NULL) return o;
        else if(o==NULL) return e;
        else odd->next = e;
        even->next = NULL;
        
        return o;
    }
int main()
{

}