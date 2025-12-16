Print sum of odd numbers from 1 to n.(using for loop, while loop and do - while loop)

Ans:- a. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        for(int i = 1; i <= n; i++){
            
            if(i % 2 != 0){
                sum += i;
            } 
        }
        cout<<sum;
        return 0;
    }

Output:- Enter the value of n : 50
625

b. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        int i = 1;
        while(i <= n){
            if(i % 2 != 0){
                sum += i;
            }
            i++;
        }
        cout<<sum;
        return 0;
    }

Output:- Enter the value of n : 75
1444

c. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        int i = 1;
        do{
            if(i % 2 != 0){
                sum += i;
            }
            i++;
        } 
        while(i <= n);
        cout<<sum;
        return 0;
    }

Output:- Enter the value of n : 65 
1089