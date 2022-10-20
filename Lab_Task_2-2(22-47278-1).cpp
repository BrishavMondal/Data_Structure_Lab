#include<iostream>
using namespace std;
int main()
{
    int n,m,k=0;
    int A3[k];
    cout<<"Enter 1st array size :";
    cin>>n;
    int A1[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of first array "<<i+1<<" elements :";
        cin>>A1[i];
    }
    cout<<"\nEnter 2nd array size :";
    cin>>m;
    int A2[m];
    for( int j=0;j<m;j++)
    {
         cout<<"Enter the value of second array "<<j+1<<" elements :";
        cin>>A2[j];
    }
    cout<<"\nNew array : (which is create by common elements of first and Second array)"<<endl;
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        {
            if(A1[x]==A2[y])
                {
                   A3[k]=A1[x];
                   k++;
                }
        }
    }
    if(n==0)
    {
        cout<<"\n NO FOUND COMMON ELEMENTS"<<endl;
    }
    else{
        for(int i=0;i<k;i++)
        {
            cout<<A3[i]<<endl;
        }
    }
    return 0;

}
