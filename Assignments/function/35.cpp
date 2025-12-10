Write a function that gets n as an argument and print the fibonacci series.

#include<bits/stdc++.h>
using namespace std;
void printFibonacci(int n)
{
    int a = 0,b = 1;c;
    cout<<"fibonacci series : ";

    for(int i = 1; i <= n i++){
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    printFibonacci(n);

}

Output:- Enter the value of n : 10
fibonacci series : 0 1 1 2 3 5 8 13 21 34