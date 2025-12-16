Print multiplication table of a number.(only with for loop.)
Ex:- n = 7 --> 7 14 21 28.....70
i = 1 - 15 and j = 1 - 10
1 * 1 = 1
1 * 2 = 2

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        
        for(int i = 1; i <= 10; i++){
            cout<<n<<" * "<<" = "<<n * i<<"\n";
        }
        cout<<'\n';
       }

Output:- Enter the value of n : 7
7 * 1 = 7
7 * 2 = 14 
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70 