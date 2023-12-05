#include<iostream>
using namespace std;
int main()
{
    cout<<"Mean\n";
    cout<<"1 add\n"<<"2 sub\n"<<"3 Mult\n"<<"4 div\n";
    int option;
    int a,b,c;
    cout<<"Enter number :";
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
    }
    cout<<"Result is :"<<c<<endl;
    return 0;
}