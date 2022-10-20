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
        cout<<"\nEnter the value of first array "<<i+1<<" elements :";
        cin>>A1[i];
        A3[k]=A1[i];
        k++;
    }
    cout<<"\n\nEnter 2nd array size :";
    cin>>m;
    int A2[m];
    for( int j=0;j<m;j++)
    {
         cout<<"\nEnter the value of second array "<<j+1<<" elements :";
        cin>>A2[j];
        A3[k]=A2[j];
        k++;
    }
    cout<<"\n\n NEW ARRAY(which create by combination of First and Second Array):"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<A3[i]<<endl;
    }
    cout<<"\n\n REVERSE OF NEW ARRAY"<<endl;
    for(int i=k-1;i>=0;i--)
    {
        cout<<A3[i]<<endl;
    }
    return 0;


}
