Create a function printEvenOrOdd(int n) that prints whether the number is even or odd.

#include<bits/stdc++.h>
using namespace std;
void printEvenOrOdd(int n)
{
    if(n%2==0)
    {
        cout<<n<<" is Even.";
    }
    else
    {
        cout<<n<<" is Odd.";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    printEvenOrOdd(n);

}

Output:- Enter the value of n : 24
24 is Even