#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int root1;
    int root2;
    int sqrt;
    cout<<"Enter the 3 Values :";
    cin>>a>>b>>c;
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<root1<<" "<<root2<<endl;
    return 0;
}