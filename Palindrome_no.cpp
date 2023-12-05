#include<iostream>
using namespace std;
int main()
{
    int n, rev=0, r, temp;
    cout<<"Enter the Number: ";
    cin>>n;
    temp = n;
    while(temp>0)
    {
        r = temp%10;
        rev = (rev*10)+r;
        temp = temp/10;
    }
    if(rev==n)
        cout<<"\nIt is a Palindrome Number";
    else
        cout<<"\nIt is not a Palindrome Number";
    cout<<endl;
    return 0;
}