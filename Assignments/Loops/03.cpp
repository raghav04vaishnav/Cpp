Print sum of even numbers from 1 to n.(using for loop, while loop and do - while loop)

Ans:- a. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        for(int i = 2; i <= n; i++){
            
            if(i % 2 == 0){
                sum = sum + i;

            }
        }
        cout<<sum;
        return 0;
    }

Output:- Enter the value of n : 20
110

b . #include<bits/stdc++.h>
     using namespace std;
     int main()
     {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        int i = 2;
        while(i <= n){
            if(i % 2 == 0){
                sum = sum + i;
            }
            i++;
        }
        cout<<sum;
        return 0;
     }

Output:- Enter the value of n : 50 
650

c. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        int i = 2;
        do{
            if(i % 2 == 0){
                sum += i;
            }
            i++;
        }
        while(i <= n);
        cout<<sum;
        return 0;
    }

Output:- Enter the value of n : 50
650