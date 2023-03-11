#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

}NODE;
void print(NODE *head){
    NODE *ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
NODE * add_at_the_end(NODE *head,int d)
{
    NODE *ptr = (NODE*)malloc(sizeof(NODE));
    ptr->data = d;
    ptr->next = NULL;
    NODE *temp = head;
    if(head==NULL)
    {
        head = ptr;
        cout<<"new head created\n";
        return head;
    }
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next = ptr;

    cout<<"added at the end\n";
    return head;

}
bool isPalindrome(NODE* head) {
        NODE *fast = head->next;
        NODE *slow = head;
        if(head->next == NULL)
        {
            return true;
        }
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
       cout<<slow->data<<endl;
        NODE *dum = NULL;
        NODE *temp = slow->next;
        cout<<"temp "<<temp->data<<endl;
        while(temp!=NULL)
        {
            NODE *next = temp->next;
            temp->next = dum;
            dum = temp;
            temp = next;
        }
        slow->next = dum;
        NODE *head1 = head;
        NODE *head2 = slow->next;
        while(head2!=NULL)
        {
            if(head1->data!=head2->data)
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
    NODE *head = NULL;
    head = add_at_the_end(head,1);
    head = add_at_the_end(head,1);
    head = add_at_the_end(head,1);
    head = add_at_the_end(head,2);
    head = add_at_the_end(head,1);
    print(head);
    cout<<isPalindrome(head)<<endl;
    print(head);
}