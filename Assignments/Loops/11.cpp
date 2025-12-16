11. Check if the number is prime.
a) (n)
b) (n/2)
c) sqrt of n
Use loop to check divisibility.

a) #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        bool flag = true;
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                flag = false;
            }
        }
        if(flag){
            cout<<"Prime Number";
        }
        else{
            cout<<"Not Primr Number";
        }
        return 0;
    }

Output:- Enter the value of n : 17
Prime Number

b) #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        bool flag = true;
        if(n < 2){
            flag = false;
        }
        else{
            for(int i = 2; i < n/2; i++){
                if(n % i == 0){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"Prime Number";
        }
        else{
            cout<<"Not Prime Number";
        }
    }

Output:- Enter the value of n : 23
Prime Number

c) #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        bool flag = true;
         if(n < 2){
            flag = false;
         } 
         else{
            for(int i = 2; i * i <= n; i++){
                if(n % i == 0){
                    flag = false;
                    break;
                }
            }
         }
         if(flag){
            cout<<"Prime Number";
         }
         else{
            cout<<"Not Prime Number";
         }
    }

Output:- Enter the value of n : 29
Prime Number
