#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the Number of day :";
    cin>>day;
    if(day==1)
    {
        cout<<"MON"<<endl;
    }
    else if(day==2)
    {
        cout<<"TUE"<<endl;
    }
    else if(day==3)
    {
        cout<<"WED"<<endl;
    }
    else if(day==4)
    {
        cout<<"THRU"<<endl;
    }
    else if(day==5)
    {
        cout<<"FRI"<<endl;
    }
    else if(day==6)
    {
        cout<<"SAT"<<endl;
    }
    else if(day==7)
    {
        cout<<"SUN"<<endl;
    }
    else{
        cout<<"INALID DAY";
    }
    return 0;
}