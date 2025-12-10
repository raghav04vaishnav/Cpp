Write a function that takes an argument and checks whether a number is pallindrome or not.

#include<bits/stdc++.h>
using namespace std;
void checkPallindrome(int n)
{
    int temp = n;
    int r = 0;

    while(n)
    {
        int digit = n % 10;
        r = r * 10 + digit;
        n/=10;
    }
    if(r == temp)
    {
        cout<<"This is a Pallindrome Number\n";
    }
    else
    {
        cout<<"This is not a Pallindrome Number\n";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    checkPallindrome(n);

}

Output:- Enter the value of n : 1221
This is a Pallindrome Number