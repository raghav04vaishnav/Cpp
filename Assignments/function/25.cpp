Write a function printMax(int a, int b) that prints the larger number.

#include<bits/stdc++.h>
using namespace std;
void printMax(int a, int b)
{
    if(a > b)
    {
       cout<<"Larger number is : "<<a;

    }
    else 
    {
    cout<<"Larger number is : "<<b;
    }

}
int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    printMax(a,b);

}

Output:- Enter two numbers : 65 12
Larger number is : 65