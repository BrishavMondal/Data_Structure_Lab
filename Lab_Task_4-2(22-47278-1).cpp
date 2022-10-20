#include<iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"Array Size:";
     cin>>n;

     int linear[n];
     cout<<"Enter Array Elements :"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>linear[i];
     }
     int a;
     cout<<"\n Enter The Search : ";
     cin>>a;
      int flag=0;


     for(int i=0;i<n;i++)
     {
         if(linear[i]==a)
         {
             flag=1;
             cout<<" \n Elements is in index number : "<<i+1<<endl;

         }
     }
     if(flag==0){
     cout<<"\n Element is not present : "<<endl;}


 }
