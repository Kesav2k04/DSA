#include<bits/stdc++.h>
using namespace std;

//SINGLY LINKED LIST :


//NODE STRUCTURE------------------------------------------------------------------------------------->
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





//CREATION OF NODE------------------------------------------------------------------------------------>
Node* create(Node* head,int val)
{
	if(head==nullptr)
	{
		head=new Node(val);
		return head;
	}

	Node* temp=head;

	while(temp->next!=nullptr)
	{
		temp=temp->next;
	}

	Node* newNode=new Node(val);
	temp->next=newNode;
	return head;
}





//TRAVERSAL OF NODE------------------------------------------------------------------------------------>
void traversal(Node* head)
{
	Node* temp=head;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}





//INSERT AT BEGINNING---------------------------------------------------------------------------------->
Node* insertAtBeginning(Node* head,int val)
{
	if(head==nullptr)
	{
		return new Node(val);
	}

	Node* temp=head;
	Node* newNode=new Node(val);
	newNode->next=head;
	head=newNode;
	return head;
}






//INSERT AT MIDDLE-------------------------------------------------------------------------------------->
Node* insertAtMiddle(Node* head,int val)
{
	int size=0;
	Node* temp=head;
	while(temp!=nullptr)
	{
		size++;
		temp=temp->next;
	}

	temp=head;
	Node* newNode=new Node(val);
	int c=1;

	if(size%2==1)
	{
		int mid=(size/2)+1;
		while(c<mid)
		{
			temp=temp->next;
			c++;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
	else
	{
		int mid=size/2;
		while(c<mid)
		{
			temp=temp->next;
			c++;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
	return head;
}





//DELETE AT BEGINNING---------------------------------------------------------------------------------->
Node* deleteAtBegin(Node* head)
{
	if(head->next==nullptr)
	{
		delete(head);
		return nullptr;
	}

	Node* temp=head;
	head=head->next;
	delete(temp);
	return head;

}






//DELETE AT MIDDLE-------------------------------------------------------------------------------------->
Node* deleteAtMiddle(Node*head)
{
    int size=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        size++;
        temp=temp->next;
    }
    temp=head;
    int c=1;
    if(size%2==1)
    {
        int mid=size/2;
        while(c<mid)
        {
            temp=temp->next;
            c++;
        }
        Node* delNode=temp->next;
        temp->next=delNode->next;
        delete(delNode);
    }
    else
    {
        int mid=(size/2)-1;
        while(c<mid)
        {
            temp=temp->next;
            c++;
        }
        Node* delNode=temp->next;
        temp->next=delNode->next;
        delete(delNode);
    }
    return head;
}







//DELETE AT END---------------------------------------------------------------------------------------->
Node* deleteAtEnd(Node* head)
{
	if(head->next==nullptr)
	{
		delete(head);
		return nullptr;
	}

	Node* temp=head;
	while(temp->next->next!=nullptr)
	{
		temp=temp->next;
	}
	delete(temp->next);
	temp->next=nullptr;
	return head;
}




//REVERSE SINGLY LINKED LIST
Node* reverseLL(Node* head)
{
    /*
        4pt rule :
        
            1.NextNode=temp->next 
            2.temp.next=prev
            3.prev=temp;
            4.temp=NextNode
    */
    
    Node* prev=nullptr;
    Node* temp=head;
    
    while(temp!=nullptr)
    {
        Node* nextNode=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    return prev;
}



//MAIN FUNCTION--------------------------------------------------------------------------------------->
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
	cout<<"LINKED LIST : ";
	traversal(head);

	// cout<<"Insert at Beginning : ";
	// int val;
	// cin>>val;
	// head=insertAtBeginning(head,val);
	// traversal(head);

	// cout<<"Insert at Middle : ";
	// int val;
	// cin>>val;
	// insertAtMiddle(head,val);
	// traversal(head);

	// cout<<"Delete at Beginning : ";
	// head=deleteAtBegin(head);
	// traversal(head);

	// cout<<"Delete at End : ";
	// head=deleteAtEnd(head);
	// traversal(head);

    // 	cout<<"Delete at Middle : ";
    // 	head=deleteAtMiddle(head);
    // 	traversal(head);
    
    cout<<endl<<endl;
    cout<<"REVERSE : ";
    head=reverseLL(head);
    traversal(head);
}












// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;

//     Node(int data)
//     {
//         this->data=data;  //this.data=data
//         next=nullptr;
//     }
// };



// Node* create(Node* head,int val)
// {
//     if(head==nullptr)
//     {
//         head=new Node(val);
//         return head;
//     }

//     Node* temp=head;

//     while(temp->next!=nullptr)
//     {
//         temp=temp->next;
//     }

//     Node* newNode=new Node(val);
//     temp->next=newNode;
//     return head;
// }


// void traversal(Node* head)
// {
//     Node* temp=head;
//     while(temp!=nullptr)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }




// int main()
// {
//     //5
//     //1 2 3 4 5

//     Node* head=nullptr;

//     int n;
//     cin>>n;
//     while(n-- >0)
//     {
//         int val;
//         cin>>val;
//         head=create(head,val);
//     }
//     traversal(head);
// }
