#include<iostream>
using namespace std;
struct Node
{
    int value;
    Node* next;
};
Node* head;

Node* GetNewNode(int data)
{
    Node* NewNode= new Node();
    NewNode->value=data;
    NewNode->next=NULL;
    return NewNode;
}
void InsertAtHead(int data)
{
    Node* NewNode=GetNewNode(data);
    NewNode->next=head;
    head=NewNode;
    cout<<data <<" Inserted at Head "<<endl;
}
void InsertAtTail(int data)
{
    Node*NewNode=GetNewNode(data);
    if(head==NULL)
    {
        head =NewNode;
        return;
    }
    Node*temp= head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NewNode;
    cout<<data<<" Inserted at Tail "<<endl;
}
void insertAtAnyPosition(int n,int x)
{
    Node*NewNode=GetNewNode(x);
    if(n==1)
    {
        NewNode->next=head;
        head=NewNode;
        return;
    }
    else
    {
        Node*temp =head;
        for( int i=1;i<n-1;i++)
        {
            temp=temp->next;
        }
        NewNode->next=temp->next;
        temp->next= NewNode;

    }
    cout<<x<<" Inserted at "<<n<<" Position."<<endl;
}
bool isEmpty()
{
    if(head==NULL)
    {
        return true;
    }
    else
        return false;
}
void deleteAtHead()
{
    if(isEmpty())
    {
        cout<<" Nothing to delete"<<endl;
    }
    else
    {
    Node*temp=head;
    head=temp->next;
    cout<<" Deleted at Head"<<endl;
    delete temp;
    }

}
void deleteAtTail()
{
    if(isEmpty())
    {
        cout<<" Nothing to delete"<<endl;
    }
    else
    {
        Node*temp=head;
        Node*temp1=temp;
        int i=0;
        while(temp->next!=NULL)
        {
            if(i>0)
            {
                temp1=temp1->next;
            }
            temp=temp->next;
            ++i;
        }
        temp1->next=NULL;
        delete temp;
        cout<<" Deleted at Tail"<<endl;
    }
}

void deleteAtAnyPosition(int n)
{
    if(isEmpty())
    {
        cout<<" Nothing to delete"<<endl;
    }
    else
    {
	Node* temp = head;
	if (n == 1)
	{
		head = temp->next;
		delete temp;
		return;
	}
	for (int i = 1; i < n - 1; i++)
	{
		temp = temp->next;
	}
	Node* temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
	cout<<" Deleted from "<<n<<" Position."<<endl;
	return;
    }
}
void Search(int x)
{
    if(isEmpty())
    {
        cout<<" It is Empty "<<endl;
    }
    else
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            if(temp->value==x)
            {
                cout<<"Found"<<endl;
                return;
            }
            temp =temp->next;
        }
        cout<<"Not found"<<endl;
    }
}

void getNode()
{
    Node*temp=head;
    cout<<" Element is :";
    while(temp!=NULL)
    {
        cout<<temp->value <<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void circular()
{
    Node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    Node* temp1=head;
    temp->next=temp1;
}

int main()
{
	head = NULL;
	InsertAtHead(5);
	InsertAtHead(6);
	InsertAtHead(7);
	InsertAtHead(8);
	getNode();

	cout<<"\n";

}
