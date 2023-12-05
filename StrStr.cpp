#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20]="Programming";
    char s2[20]="m ";
    if(strstr(s1,s2)!=NULL)
    cout<<strstr(s1,s2)<<endl;
    else
    cout<<"Not Found"<<endl;
    return 0;
}