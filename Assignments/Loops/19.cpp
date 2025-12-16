Print number divisible by A and B between 1 to n.
Ex:- divisible by 3 & 5 ----> 15, 30, 45.....
divisible by 4 & 16

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n,a,b;
        cout<<"Enter the value of n : ";
        cin>>n;
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;

        cout<<"Numbers divisible by "<<a<<" and "<<b<<"between 1 to "<<n<<"is : \n";
         for(int i = 1; i <= n; i++){
            if(i % a == 0 && i % b == 0){
                cout<<i<<" ";
            }
         }
       }

Output:- Enter the value of n : 100
Enter the value of a : 2
Enter the value of b : 4
Numbers divisible by 2 and 4 between 1 to 100 is : 
 2 4 8 12 20 24 28 32 36 40 44 48 52 56 60 64 68 72 76 80 84 88 92 96 100