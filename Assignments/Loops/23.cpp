using (for loop and while loop)iterate and start with 1 to nth number jump by
a) 2
b) 4
c) 5
d) 6 
e) 8
f) 10

Ans:- a) #include<bits/stdc++.h>
          using namespace std;
          int main()
          {
            int n;
            cout<<"Enter the value of n : ";
            cin>>n;
            
            cout<<"\n Jump by 2 : ";
            for(int i = 1; i <= n; i+=2){
                cout<<i<<" ";
            }

             cout<<"\n Jump by 4 : ";
            for(int i = 1; i <= n; i+=4){
                cout<<i<<" ";
            }

             cout<<"\n Jump by 5 : ";
            for(int i = 1; i <= n; i+=5){
                cout<<i<<" ";
            }

             cout<<"\n Jump by 6 : ";
            for(int i = 1; i <= n; i+=6){
                cout<<i<<" ";
            }

             cout<<"\n Jump by 8 : ";
            for(int i = 1; i <= n; i+=8){
                cout<<i<<" ";
            }

             cout<<"\n Jump by 10 : ";
            for(int i = 1; i <= n; i+=10){
                cout<<i<<" ";
            }
          }

Output:- Enter the value of n : 100

Jump by 2 : 1 2 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99

Jump by 4 : 1 5 9 13 17 21 25 29 33 37 41 45 49 53 57 61 65 69 73 77 81 85 89 93 97

Jump by 5 : 1 6 11 16 21 26 31 36 41 46 51 56 61 66 71 76 81 86 91 96

Jump by 6 : 1 7 13 19 25 31 37 43 49 55 61 67 73 79 85 91 97

Jump by 8 : 1 9 17 25 33 41 49 57 65 73 81 89 97

Jump by 10 : 1 11 21 31 41 51 61 71 81 91 

b) #include<bits/stdc++>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        cout<<"\n Jump by 2 : ";
        int = 1;
        while(i <= n){
            cout<<i<<" ";
            i+=2;
        }

        cout<<"\n Jump by 4 : ";
        int = 1;
        while(i <= n){
            cout<<i<<" ";
            i+=4;
        }

        cout<<"\n Jump by 5 : ";
        int = 1;
        while(i <= n){
            cout<<i<<" ";
            i+=5;
        }

        cout<<"\n Jump by 6 : ";
        int = 1;
        while(i <= n){
            cout<<i<<" ";
            i+=6;
        }

        cout<<"\n Jump by 8 : ";
        int = 1;
        while(i <= n){
            cout<<i<<" ";
            i+=8;
        }

        cout<<"\n Jump by 10 : ";
        int = 1;
        while(i <= n){
            cout<<i<<" ";
            i+=10;
        }
    }

Output:- Enter the value of n : 100

Jump by 2 : 1 2 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99

Jump by 4 : 1 5 9 13 17 21 25 29 33 37 41 45 49 53 57 61 65 69 73 77 81 85 89 93 97

Jump by 5 : 1 6 11 16 21 26 31 36 41 46 51 56 61 66 71 76 81 86 91 96

Jump by 6 : 1 7 13 19 25 31 37 43 49 55 61 67 73 79 85 91 97

Jump by 8 : 1 9 17 25 33 41 49 57 65 73 81 89 97

Jump by 10 : 1 11 21 31 41 51 61 71 81 91 