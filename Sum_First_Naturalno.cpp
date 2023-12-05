#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter the Number :\n";
    cin>>n;
    for(int i=1; i<n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of first natural no :"<<n<<"\n natural Number is :"<<sum<<endl;
    return 0;
}