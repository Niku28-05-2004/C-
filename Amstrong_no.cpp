#include<iostream>
using namespace std;
int main()
{
    int n;
    int r;
    int sum=0;
    cout<<"Enter the Number :";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==n)
    cout<<"It is Amstrong Number";
    else
    cout<<"It is not Amstrong Number";
    return 0;
}