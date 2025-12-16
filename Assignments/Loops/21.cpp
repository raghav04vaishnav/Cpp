Find the total count of 8 in a digit.

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        long long n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int count = 0;
        while(n){
            int digit = n % 10;
            if(digit == 8){
                count++;
            }
            n /= 10;
        }
        cout<<"Count is : "<<count;
       }

Output:- 8824128948
Count is : 4 