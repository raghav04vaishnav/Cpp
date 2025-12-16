Print the Sum of first n natural numbers. (using for loop, while loop and do - while loop)

Ans:- a. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum = sum + i;
        }
        cout<<sum;
        return 0;

    }

Output:- Enter the value of n : 50
1275

b. #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int sum = 0;
        int i = 1;
        while(i <= n){
            sum = sum + i;
            i++;
        }
        cout<<sum;
        return 0;
    }

Output:- Enter the value of n : 150
11325

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
            sum = sum + i;
            i++; 
        }
        while(i <= n);
        cout<<sum;
        return 0;
    }

Output:- Enter the value of n : 100
5050