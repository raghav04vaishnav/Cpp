Print fibonacci series up to n terms(using for loop).
0 1 1 2 3 5 8 13 21 34

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int a = 0, b = 1; c;
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        cout<<a<<" "<<b<<" ";

        for(int i = 2; i <=n; i++){
            c = a + b;
            cout<<c<<" ";
            a = b;
            b = c;
        }
       }

Output:- Enter the value of n : 10
0 1 1 2 3 5 8 13 21 34 55