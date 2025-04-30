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
        prev=next=nullptr;
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
    
    cout<<"Doubly linked list forwards: ";
    
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    
    temp=head;
    
    cout<<endl<<"Doubly linked list backwards: ";
    
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
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
    traversal(head);
}
