Count digits in a number.(using while loop and do - while loop. Ex:- 4582 --> 4 digit)

Ans:- a. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int count = 0;
        int digit = 0;
        while(n){
            digit = n % 10;
            count++;
            n/=10;
        }
        cout<<"Count is : "<<count;
        return 0;
    }

Output:- Enter the value of n : 4582
Count is : 4

b. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int digit = 0;
        int count = 0;
        do{
            digit = n%10;
            count++;
            n/=10;
        }
        while(n);
        cout<<"Count is : "<<count;
        return 0;
    }

Output:- Output:- Enter the value of n : 14528
Count is : 5