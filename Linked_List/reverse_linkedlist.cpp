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
NODE *reverse_linked_list(NODE *head)
{
    NODE *dum = NULL;
    
    while(head)
    {
        NODE *ptr = head->next;
        head->next = dum;
        dum = head;
        head = ptr;
    }
    return dum;
}
int main()
{
    NODE *first = NULL;
    NODE *second = NULL;
    first = add_at_the_end(first,4);
    first = add_at_the_end(first,5);
    second = add_at_the_end(second,3);
    second = add_at_the_end(second,4);
    second = add_at_the_end(second,5);
    
    // head = reverse_linked_list(head);
    // print(head);
    NODE *dummy1 = NULL;
        
        while(first!=NULL)
        {
            Node *next = first->next;
            first->next = dummy1;
            dummy1 = first;
            first = next;
        }
        
       
        Node *dummy2 = NULL;
       
        while(second!=NULL)
        {
            Node *next = second->next;
            second->next = dummy2;
            dummy2 = second;
            second = next;
        }
        first = dummy1;
        second = dummy2;
        print(first);
        print(second);
        
        NODE *dum = NULL;
        dum = add_at_the_end(dum,0);
        NODE *temp = dum;
        int carry = 0;
        while(first!=NULL||second!=NULL||carry)
        {
            
            int sum = 0;
            if(first!=NULL)
            {
                sum += first->data;
                first = first->next;
            }
            if(second!=NULL)
            {
                sum+=second->data;
                second = second->next;
            }
            sum+=carry;
            carry = sum/10;
            NODE *node = new Node(sum%10);
            temp ->next = node;
            temp = temp->next;
        }
        dum = dum->next;
        NODE *dummy3 = NULL;
        print(dum);
        // NODE * final = dum;
        while(dum!=NULL)
        {
            NODE *next = dum->next;
            dum->next = dummy3;
            dummy3 = dum;
            dum = next;
        }
        
        print(dum);

}
