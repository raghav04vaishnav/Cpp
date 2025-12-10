Write a function CheckPrime that takes an argument and check whether number is prime or not.

#include<bits/stdc++.h>
using namespace std;
void CheckPrime(int n)
{
    if(n <= 1)
    {
        cout<<"not prime number\n";
        return;
    }
    
    bool flag = true;
     for(int i = 2; i * i <= n; i++){

        if(n % i == 0)
        {
            flag = false;
            break;
        }
     }
     
     if(flag)
     {
        cout<<n<<" is a Prime Number";
     }
     else
     {
        cout<<n<<" is not a Prime Number";
     }
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    CheckPrime(n);

}

Output:- Enter the value of n : 19
19 is a Prime Number