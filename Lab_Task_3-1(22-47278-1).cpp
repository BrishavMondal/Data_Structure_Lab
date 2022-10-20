#include<iostream>
using namespace std;
struct Emp{
string  id;
int join_year;
int sal;

};
int  main()
{
   Emp e[10];
   for(int i=0;i<10;i++)
   {
        cout<<"EMPLOYEE-"<<i+1<<" ID : ";
       cin>>e[i].id;

       cout<<"  EMPLOYEE JOINING YEAR "<<i+1<<": ";
       cin>>e[i].join_year;

       cout<<"EMPLOYEE SALARY "<<i+1<<": ";
       cin>>e[i].sal;
       cout<<endl;

   }
   cout<<"EMPLOYEE JOINED BEFORE YEAR 2009"<<endl;

   for(int i=0;i<10;i++)
   {
       if( e[i].join_year<2009)
       {


       cout<<"EMPLOYEE NO "<<i+1<<" "<<"ID: "<<e[i].id<<endl;

       }
   }

   cout<<endl;
   cout<<"EMPLOYEE WHO'S SALARY MORE THAN 20000 TAKA :"<<endl;

   for(int i=0;i<10;i++)
   {
       if( e[i].sal>20000)
       {


       cout<<"EMPLOYEE NO "<<i+1<<" "<<"ID: "<<e[i].id<<endl;

       }
   }
   return 0;

}
