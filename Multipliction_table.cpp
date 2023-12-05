#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number :\n";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        cout<<n<<"x"<<i<<"="<<i*n<<endl;
    }
    return 0;
}