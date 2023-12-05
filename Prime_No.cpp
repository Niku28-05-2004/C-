#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int count =0;
    cout<<"Enter the n :";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }

        if(count==1){
        cout<<"It is prime number";
        }

        else{
            cout<<"Not a Prime";
        }
    }

}