#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        next=prev=nullptr;
    }
};

Node* create(Node* head,int val)
{
    if(!head)
        return new Node(val);
        
    Node* temp=head;
    
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    
    Node* newNode=new Node(val);
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}

void traversal(Node* head)
{
    if(!head)
        return;
        
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deleteAtBegin(Node* head)
{
    if(!head->next)
        return nullptr;
        
    Node* temp=head;
    
    head=head->next;
    
    head->prev=nullptr;
    temp->next=nullptr;
    delete(temp);
    return head;
}

int main()
{
    Node* head=nullptr;
    int n;
    cin>>n;
    while(n-- >0)
    {
        int val;
        cin>>val;
        head=create(head,val);
    }
    head=deleteAtBegin(head);
    traversal(head);
}
