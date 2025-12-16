Find the largest digit of a number.(only using while loop)
Ex:- 6395 ----> largest = 9

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int max = 0, last;
        while(n){
            last = n % 10;
            if(max < last){
                max = last;
            }
            n /= 10;
        }
        cout<<"Largest number : "<<max;
       }

Output:- Enter the value of n : 15728
Largest number : 8