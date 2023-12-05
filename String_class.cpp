#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="Today";
    string::iterator it;
    for(it=str.begin();
    it!=str.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    return 0;
}