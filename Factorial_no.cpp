#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int fact=1;
    cout<<"Enter the Number :";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        fact *=i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}