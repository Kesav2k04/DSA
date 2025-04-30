#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};

Node* create(Node* head,int val)
{
    if(head==nullptr) return new Node(val);
    
    Node* temp=head;
    
    while(temp->next!=nullptr)
    {
        temp=temp->next;   
    }
    
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

void traversal(Node* head)
{
    if(!head) return;
    
    Node* temp=head;
    
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reversal(Node* head)
{
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr)
    {
        Node* nextNode=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    return prev;
}

Node* swapNodes(Node* head,int a,int b)
{
    //10 20 30 40 50
    //10 40 30 20 50
    
    Node* prevA=nullptr;
    Node* currA=head;
    while(currA && currA->data!=a)
    {
        prevA=currA;                //prevA=10
        currA=currA->next;          //currA=20
    }
    
    Node* prevB=nullptr;
    Node* currB=head;
    while(currB && currB->data!=b)
    {
        prevB=currB;                //prevB=30
        currB=currB->next;          //currB=40
    }
    
    if(!currA || !currB) return head; //NOT FOUND
    
    if(prevA)
    {
        prevA->next=currB;
    }
    else
    {
        head=currB;
    }
    
    if(prevB)
    {
        prevB->next=currA;
    }
    else
    {
        head=currA;
    }
    
    //currA=20
    //currB=40
    //currA->next=30
    //currB->next=50
    
    //40->30
    //20->50
    
    //10 -> 40 -> 30 -> 20 -> 50
    
    
    Node* temp=currA->next;                ///30
    currA->next=currB->next;
    currB->next=temp;
    
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
    int a,b;
    cin>>a>>b;
    head=reversal(head);
    head=swapNodes(head,a,b);
    traversal(head);
}
