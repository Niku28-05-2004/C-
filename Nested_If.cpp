//Remaing 

#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"Enter a b c :";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"Roots are Real & Equal";
        cout<<endl<<(-b/(2*a));
    }
    else if(d>0)
    {
        cout<<"Roots are real & Unequal";
        cout<<end<<(-btsqrt(d))(2*a);
    }
    else
      cout<<"Imanging";
}