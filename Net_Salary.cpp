#include<iostream>
using namespace std;
int main()
{
    float basic;
    float Percentallow;
    float percentdedu;
    float netsalary;

    cout<<"Enter the Basic Salary :";
    cin>>netsalary;
    cout<<"Enter the Percent Allowences :";
    cin>>Percentallow;
    cout<<"Enter the percent Deduction :";
    cin>>percentdedu;
    netsalary=basic+basic*Percentallow/100-basic*percentdedu/100;
    cout<<"Net Salary is:"<<netsalary<<endl;
}