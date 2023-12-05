#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20]="HELLO";
    char s2[20]="hellO)";
    cout<<strcmp(s1,s2)<<endl;
    return 0;
}