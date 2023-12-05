#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int sum=0;
    cout<<"Enter the n Value :";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum +=i;
    }
    cout<<"Sum no is :"<<sum;
    return 0;
}
