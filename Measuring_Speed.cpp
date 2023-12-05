#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int v;
   int a;
   int u;
   float speed;
   cout<<"Enter the 3 Number :";
   cin>>v>>a>>u;
   speed=(v*v-u*u)/(2*a);
   cout<<"Speed is :"<<speed<<endl;
   return 0;
   
}