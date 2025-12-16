Sum of digits of a number.(using for, while and do - while loop)
Ex:- 789 ----> 7+8+9=24
12345 ----> 1+2+3+4+5=15

Ans:- a) #include<bits/stdc++.h>
          using namespace std;
          int main()
          {
            int n;
            cout<<"Enter thevalue of n : ";
            cin>>n;

            int sum = 0;
            for(int i = 1; i > 0; i /= 10){
                int digit = i % 10;
                sum += digit;
            }
            cout<<"Sum is : "<<sum;
          }

    Output:- Enter the value of n : 12345
    Sum is : 15
    
    b) #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cout<<"Enter the value of n : ";
            cin>>n;

            int sum = 0, i = n;
            while(i){
                int digit = i % 10;
                sum += digit;
                i /= 10;
            }
            cout<<"Sum is : "<<sum;
        }

    Output:- Enter the value of n : 789
    Sum is : 24
    
    c) #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cout<<"Enter the value of n : ";
            cin>>n;

            int sum = 0, i = n;
            do{
                int digit = i % 10;
                sum += digit;
                i /= 10;
            }
            while(i);
            cout<<"Sum is : "<<sum;
        }

    Output:- Enter the value of n : 153
    Sum is : 9