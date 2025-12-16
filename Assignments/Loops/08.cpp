Find factorial of a number.(using for, while and do while loop)
Ex-->    5=> 120

Ans:- a. #include<bits/stdc++.h>
          using namespace std;
          int main()
          {
            int n;
            cout<<"Enter the value of n : ";
            cin>>n;
            long long fact = 1;

            int i = 1, j = n;
            for(i = 1; i <= j; i++){
                fact *= i;
            }
            cout<<"Factorial is : "<<fact;
            return 0;
          }

Output:- Enter the value of n : 14
Factorial is : 8717829100

b. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        long long fact = 1;
        int i = 1, j = n;
        while(i <= j){
            fact *= i;
            i++;
        }
        cout<<"Factorial is : "<<fact;
        return 0;
    }

Output:- Enter the value of n : 14
Factorial is : 8717829100

c. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        long long fact = 1;

        int i = 1, j = n;
        do{
            fact *= i;
            i++;
        }
        while(i <= j);
        cout<<"Factorial is : "<<fact;
        return 0;
    }

Output:- Enter the value of n : 14
Factorial is : 8717829100
