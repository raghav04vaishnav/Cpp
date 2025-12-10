Write a function GCD that takes two values and print the gcd of two numbers.

#include<bits/stdc++.h>
using namespace std;
void GCD(int a, int b)
{
    while(b != 0)
    {
      int temp = b;
      b = a % b;
      a = temp;
    }
    cout<<"GCD is : "<<a<<endl;

}
int main ()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    GCD(a,b);

}

Output:- Enter two numbers : 48 12
GCd : 12