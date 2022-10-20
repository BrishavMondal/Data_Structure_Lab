#include<iostream>
using namespace std;
int main()
{
    int a; int s;
    cout<<"Array Size :";
    cin>>a;
    int bubble[a];
    cout<<"Array Elements :";
    for(int i=0;i<a;i++)
    {
        cin>>bubble[i];
    }


    for(int i=0;i<a-1;i++)
    {
        for(int j=0;j<a-1-i;j++)
        {
            if(bubble[j]>bubble[j+1])
            {
                s=bubble[j];
                bubble[j]=bubble[j+1];
                bubble[j+1]=s;
            }

        }
    }
    cout<<"\n Sorted Array :"<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<bubble[i]<<" ";
    }

}
