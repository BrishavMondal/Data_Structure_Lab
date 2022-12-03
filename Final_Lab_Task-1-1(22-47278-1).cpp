#include<iostream>
using namespace std;
int queue[10];
int front=-1;
int rear=-1;
bool isEmpty()
{
    if((front==-1)&&(rear==-1))
    {
               return true;
    }
    else
        return false;
}

bool isFull()
{
    if(rear==10-1)
    {
        return true;
    }
    else
        return false;
}

void enQueue(int value)
{
    if(isFull())
    {
        cout<<"\n Queue is full";
    }
    else if(isEmpty())
    {
        front=rear=0;
        queue[rear]=value;
        cout<<"\n Inserted : "<<value;
    }
    else
    {
        rear=rear+1;
        queue[rear]=value;
        cout<<"\n Inserted : "<<value;
    }
}

void deQueue()
{
    if(isEmpty())
    {
        cout<<"\n Queue is Empty. So dequeue isn't possible. ";
    }
    else if(front==rear)
    {
        front=rear=-1;
        cout<<"\n Dequeue : "<<queue[front+1];
    }
    else
    {
        front=front+1;
        cout<<"\n Dequeue : "<<queue[front-1];
    }
}

void frontElement()
{
    cout<<"\n Front Element is :"<<queue[front];
}

void showQueue()
{
    if(isEmpty())
    {
        cout<<"\n Queue is Empty";
    }
    else
        cout<<"\n Queue is :";
        for(int index=front;index<rear+1;index++)
    {
        cout<<" "<<queue[index];
    }
}

int main()
{
    //isEmpty();
    //isFull();
    enQueue(10);
    enQueue(6);
    enQueue(1);
    enQueue(14);
    enQueue(13);
    enQueue(12);
    //frontElement();
    showQueue();
    //deQueue();
    //deQueue();
    //deQueue();
    //frontElement();
    //showQueue();

    cout<<"\n\n\n\n\n\n";
}
