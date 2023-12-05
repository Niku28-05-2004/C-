#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"Enter two number :";
    cin>>x>>y;
    if(x>y)
    {
        cout<<"Max is :"<<x<<endl;
    }
    else{
        cout<<"Max is :"<<y<<endl;
    }
    return 0;
}