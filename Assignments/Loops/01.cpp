1. Print numbers from 1 to n. (using for loop, do - while loop and while loop)

Ans:- a. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        for(int i = 1; i <= n; i++){
            cout<<i<<" ";

        }
        return 0;

    }

Output:- Enter the value of n : 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

b. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int i = 1;
        while(i <= n){
            cout<<i<<" ";
            i++;
        }
        return 0;
    
    }

Output:- Enter the value of n : 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

c. #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int i = 1;
        do{
            cout<<i<<" ";
            i++;
        }

        while(i <= n);
        return 0;

    }

Output:- Enter the value of n : 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20