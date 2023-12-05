#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str = "Welcome";
    char str[10];
    str.copy(str,3);
    str[3]='\0';
    cout<<str<<endl;
    return 0;   
}