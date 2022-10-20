#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter The String: ";
    getline(cin,s);

    int j;
    cout<<"Enter The Value: ";
    cin>>j;

    int i=2;

    while(i<s.length())
        {
            if(int(s[i])!=32)
            {
                s[i]=char(int(s[i])+j);
            }

         i=i+3;

        }

    cout<<"Converted String: ";

    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    return 0;
}
