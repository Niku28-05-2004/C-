#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="snehal will be air force officer soon";
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    return 0;
}