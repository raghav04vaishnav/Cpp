Write a function printSum(int a, int b) that prints the sum.

#include<bits/stdc++.h>
using namespace std;
void printSum(int a, int b)
{

    int sum = a + b;
    cout<<"Sum is : "<<sum;

}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;

    printSum(a,b);
    
}

Output:- Enter the value of a and b : 45 15
Sum is : 60