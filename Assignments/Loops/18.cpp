Check Armstrong number using while loop.
Ex:- 153 ----> 1^3+5^3+3^3= 153

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int temp = n, sum = 0;
        while(temp){
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10; 
        }
        if(sum == n){
            cout<<"This is an Armstrong Number\n";
        }
        else{
            cout<<"This is not an Armstrong Number\n";
        }
       }

Output:- Enter the value of n : 153
This is an Armstrong Number