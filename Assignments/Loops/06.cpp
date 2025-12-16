Reverse a number(check all the cases like succeeding zeros.)
(while loop and do - while loop)=>(do not change the data - type keep it integer.)
Ex:- 1234--> 4321
1000--> 0001
120500--> 005021

Ans:- a.#include<bits/stdc++.h>
         using namespace std;
         int main()
        {
          int n;
          cout<<"Enter the value of n : ";
          cin>>n;

          int r,t = 0,last,count = 0;
          int temp = n;
          while(n){
            last = temp % 10;
            if(last == 0){
                count++;
            }
            else{
                break;
            }
            temp/=10;
          }
          while(n){
            r = n % 10;
            t = (t * 10) + r % 10;
            n/=10; 
          }
          cout<<"Reversed number is : ";
          for(int i = 0; i < count; i++){
            cout<<"0";
          }
          cout<<t;
          return 0;
       }

Output:- Enter the value of n : 1234
Reversed number is : 4321

b. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int r,t = 0,last,count = 0;
        int temp = n;
        while(temp){
            last = temp % 10;
            if(last == 0){
                count++;
            }
            else{
                break;
            }
            temp/=10;
        }
        do{
          r = n % 10;
          t = (t * 10) + r;
          n/=10;
        }
        while(n);

        cout<<"Reversed number is : ";
        for(int i = 0; i < count; i++){
            cout<<"0";
          }
          cout<<t;
          return 0;
    }

Output:-Output:- Enter the value of n : 120500
Reversed number is : 005021


