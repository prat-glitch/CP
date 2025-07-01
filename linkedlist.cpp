#include<bits/stdc++.h>
using namespace std;
Node*removetail(Node*head)
{
    if(head==NULL || head->next==NULL)return NULL;
    Node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
int main()
{
    vector<int>&arr(12,8,2,7)
    head=removetail(head);
    cout<<head<<endl;
}