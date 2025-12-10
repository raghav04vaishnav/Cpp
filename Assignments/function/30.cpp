Create a function printGrade(int marks) that prints grade based on marks.

#include<bits/stdc++.h>
using namespace std;
void printGrade(int marks)
{
    if(marks >= 90)
    {
        cout<<"Grade : A\n";
    }
    else if(marks >= 75)
    {
        cout<<"Grade : B\n";
    }
    else if(marks >= 60)
    {
        cout<<"Grade : C\n";
    }
    else if(marks >= 45)
    {
        cout<<"Grade : D\n";
    }
    else
       cout<<"Grade : F(Fail)";

}
int main()
{
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
    
    printGrade(marks);

}

Output:- Enter the marks : 85
Grade : B