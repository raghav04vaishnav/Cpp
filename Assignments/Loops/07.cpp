Check if a number is a palindrome.(using while and do - while loop)

Ans:- a. #include<bits/stdc++.h>
          using namespace std;
          int main()
          {
            int n;
            cout<<"Enter the value of n : ";
            cin>>n;

            int temp = n;
            int r = 0;
            while(n){
                int digit = n % 10;
                r = r * 10 + digit;
                n/=10;
            }

            if(temp == r){
                cout<<"This is palindrome number.";
            }
            else{
                cout<<"This is not palindrome number.";
            }
            return 0;
          }

Output:- Enter the value of n : 323
This is palindrome number.

b. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int temp = n;
        int r = 0;
        do{
            int digit = n % 10;
            r = r * 10 + digit;
            n/=10; 
        }
        while(n);
        if(temp == r){
            cout<<"This is palindrome number.";
        }
        else{
            cout<<"This is not palindrome number."
        }
        return 0;
    }

Output:- Enter the value of n : 1536
This is not palindrome number.