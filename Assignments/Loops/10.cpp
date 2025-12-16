Print all divisors of a number(using for, while and do - while loop)
Ex:- 12 ---> 1, 2, 3, 4, 6, 12
15 ---> 1, 3, 5, 15

a) (n)
Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        cout<<"Divisors : ";
        for(int j = 1; j <= n; j++){
            if(n % j == 0){
                cout<<j<<" ";
            }
        }
        return 0;
       }

Output:- Enter the value of n : 12
Divisors : 1 2 3 4 6 12

b) (n/2) two pointers approach :-
    
   #include<bits/stdc++.h>
   using namespace std;
   int main()
   {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i = 1;
    cout<<"Divisors : ";

    while(i <= n/2){
        if(n % i == 0){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
   }
   
Output:- Enter the value of n : 24
Divisors : 1 2 3 4 6 8 12 
    