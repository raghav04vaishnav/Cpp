Write a function salarySlip(string name, int basic, int bonus)that prints total salary.

#include<bits/stdc++.h>
using namespace std;
void salarySlip(string name, int basic, int bonus)
{
    int total = basic + bonus;
    cout<<"Salary Slip\n";
    cout<<"Employee Name : "<<name<<endl;
    cout<<"Basic Salary : "<<basic<<endl;
    cout<<"Bonus : "<<bonus<<endl;
    cout<<"Total Salary : "<<total<<endl;   
}
int main()
{
    string name;
    cout<<"Enter Employee Name : ";
    cin>>name;

    int basic;
    cout<<"Enter basic salary";
    cin>>basic;

    int bonus;
    cout<<"Enter bonus amount : ";
    cin>>bonus;

    salarySlip(name,basic,bonus);

}

Output:- Enter Employee Name : Raghav
Enter basic salary : 50000
Enter bonus amount : 20000
Salary Slip
Employee Name : Raghav
Basic Salary : 50000
Bonus : 20000
Total Salary : 70000 