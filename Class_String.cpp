#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the words :";
    //cin>>str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}