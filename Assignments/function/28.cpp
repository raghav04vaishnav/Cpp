Create a function showSalary(string empName, int salary) that prints salary slip.

#include<bits/stdc++.h>
using namespace std;
void showSalary(string empName, int salary)
{
    cout<<"SALARY SLIP\n";
    cout<<"Employee name : "<<empName<<endl;
    cout<<"Salary Amount : Rs: "<<salary<<endl;

}
int main()
{
    string empName;
    cout<<"Enter Employee Name : ";
    getline(cin,empName);

    int salary;
    cout<<"Enter Salary : ";
    cin>>salary;

    showSalary();

}

Output:- Enter Employee Name : Raghav Vaishnav
Enter Salary : 50000
SALARY SLIP
Employee Name : Raghav Vaishnav
Salary Amount : Rs: 50000