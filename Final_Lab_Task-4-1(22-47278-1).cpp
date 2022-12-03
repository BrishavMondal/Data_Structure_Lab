#include<iostream>
using namespace std;
int queue[4];
int front =-1;
int rear=-1;
bool isEmpty()
{
    if((front==-1)&&(rear==-1))
        return true;
    else
        return false;
}
bool isFull()
{
    if(((rear+1)%4)==front)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enQueue(int value)
{
    if(isFull())
    {
        cout<<" Queue is Full."<<endl;

    }
    else if(isEmpty())
    {
        front=0;
        rear=0;
        queue[rear]=value;
        cout<<" Inserted "<<endl;
    }
    else
    {
        rear=(rear+1)%4;
        queue[rear]=value;
        cout<<" Inserted "<<endl;
    }
}
void deQueue()
{
    if(isEmpty())
    {
        cout<<" Queue is Empty "<<endl;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
        cout<<" Deleted "<<endl;
    }
    else
    {
        front=(front+1)%4;
        cout<<" Deleted "<<endl;

    }
}
void frontElement()
{
    cout<<" Front Element : "<<queue[front]<<endl;
}
void showQueue()
{
    if(isEmpty())
    {
        cout<<" Queue is Empty."<<endl;
    }
    else if(front<=rear)
    {
        cout<<" Queue is : ";
        for(int i=front;i<=rear;i++)
        {
            cout<<" "<<queue[i];
        }
    }
    else
    {
        for(int i=front; i<=(4-1); i++)
        {
            cout<<" "<<queue[i];
        }

      for(int i=0;i<=rear;i++)
        {
        cout<<" "<<queue[i];
        }

    }
    cout<<endl;
}

int main()
{
    enQueue(10);
    enQueue(11);
    enQueue(15);
    enQueue(7);
    frontElement();
    showQueue();
    cout<<endl;


    enQueue(15);
    frontElement();
    showQueue();
    cout<<endl;

    deQueue();
    deQueue();
    frontElement();
    showQueue();
    cout<<endl;


    deQueue();
    deQueue();
    showQueue();
}
