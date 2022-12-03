#include<iostream>
using namespace std;
struct node
{
    int data;
    node* prev;
    node* next;
};
node* head;
node* getNewNode(int x)
{
    node* NewNode= new node();
    NewNode->data=x;
    NewNode->prev=NULL;
    NewNode->next=NULL;
    return NewNode;
}
void insertAtHead(int x)
{
    node* NewNode=getNewNode(x);
    if(head==NULL)
    {
        head=NewNode;
    }
    else
    {
        head->prev=NewNode;
        NewNode->next=head;
        head=NewNode;
        NewNode->prev=NULL;
    }
    cout<<" "<<x<<" insert as front."<<endl;
}
void show()
{
	node* temp = head;
	if (head == NULL)
	{
		cout << "Error: List is Empty " << endl;
		return;
	}
	cout << " Element List: " << " ";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
    insertAtHead(12);
    insertAtHead(11);
    insertAtHead(10);
    show();
}

