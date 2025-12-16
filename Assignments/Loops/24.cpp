Take a number from user add the first digit and last digit.
Ex:- 153 = 1+3=4

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int first = n;
        int last = n % 10;
        int sum;
        while(first >= 10){
            first /= 10;
        }
        sum = first + last;
        cout<<"Sum is : "<<sum;
       }

Output:- Enter the value of n : 234
Sum is : 6
