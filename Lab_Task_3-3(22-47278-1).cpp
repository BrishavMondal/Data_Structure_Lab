#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number of rows: ";
    cin>>a;

    cout<<"Enter the number of column: ";
    cin>>b;

    int m[a][b];
    int t[b][a];

    for(int i=0;i<a;i++)
    {
        cout<<"Enter the elements of "<<"row no "<<i+1<<": ";

        for(int j=0;j<b;j++)
        {
            cin>>m[i][j];
            t[j][i]=m[i][j];
        }
    }

    cout<<"Transpose matrix: "<<endl;

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<t[i][j]<<" ";

        }
        cout<<endl;
    }
 return 0;
}
