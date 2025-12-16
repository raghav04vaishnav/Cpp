Check if the number n is a power of 7 if it is then find which power?

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
          int n;
          cout<<"Enter the value of n : "
          cin>>n;

          int count = 0;
          while(n % 7 == 0){
            n /= 7;
            count++;
          }
          if(n == 1){
            cout<<"Power of 7 hai " "\n";
            cout<<"Number is"<<count<<"Power of 7";
          }
          else{
            cout<<"Power of 7 nhi hai";
          }
       }

Output:- Enter the value of n : 2401
Power of 7 hai
Number is 4 Power of 7