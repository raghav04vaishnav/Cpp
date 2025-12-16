Take a number from user get the first digit and last digit.
9533 = first number = 9
       last number = 3
    for loop >> 1 - 9
        Run a for loop from 1 till first digit 
    do - while >> 3 - 0
        Run a do - while loop from last digit to 0.

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int last = n % 10;
        int temp = n;
        while(temp >= 10){
            temp /= 10;
        }
        int first = temp;
        cout<<"First digit = "<<first<<endl;
        cout<<"Last digit = "<<last<<endl;

        cout<<"\n (1 to first digit):"<<endl;
        for(int i = 1; i <= first; i++){
            cout<<i<<" ";
        }

        cout<<"\n \n (last digit to 0):"<<endl;
        int j = last;
        do{
            cout<<j<<" ";
            j--;
        }
        while(j >= 0);
       }

    Output:- Enter the value of n : 9533
    First digit = 9
    Last digit = 3

    (1 to first digit):
    1 2 3 4 5 6 7 8 9

    (last digit to 0):
    3 2 1 0