Take two integers as input and print their greatest common divisor (GCD).
Ans:- #include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    int c;
    
    while(a%b)
    {
        c = b % a;
        b = a;
        a = c;
        
    }
    cout<<"Ans : "<<b<<"\n";
    
}
