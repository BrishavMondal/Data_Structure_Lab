#include<iostream>
using namespace std;
int stack [4];
int top=0;

bool isEmpty()
{
    if(top==-1)
       return true;
        else
        return false;
}

bool isFull()
{
    if(top==3)
        return true;
    else
        return false;
}

bool push(int p)
{
    if (isFull())
    {
        cout<<"Stack is Full\n";
        return false;
    }
    else
    {
        cout<<" Elements Pushed"<<endl;
        stack[top++]=p;
        return true;
    }
}

bool pop()
{
    if (isEmpty())
    {
        cout<<"Stack empty \n";
        return false;
    }
    else
    {
        top--;
        return true;
    }
}

void showTop()
{
    cout<<"Top element : "<<stack[top-1];
}

void display()
{
    if(isEmpty())
    {
        cout<<"Stack empty\n";
        return;
    }
    else
    {
        for(int index=top-1;index>=0;index--)
        {
            cout<<stack[index]<<endl;
        }
    }
}
int main()
{
    push(2);
    push(6);
    push(3);
    display();
    showTop();

    pop();
    pop();
    pop();
    display();
    showTop();



}
