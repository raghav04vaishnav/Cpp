Find GCd (HCF) of two numbers using loop.

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int a,b;
        cout<<"Enter the value of a and b : \n";
        cin>>a>>b;
        int c;

        do{
            c = b % a;
            b = a;
            a = c;
        }
        while(a % b);
        cout<<"GCD is : "<<b<<"\n";
       }

Output:- Enter the value of a and b : 
24 12 
GCD is : 12 