Find the smallest digit of a number.(do - while loop)
Ex:- 6395 ----> smallest = 3

Ans:- #include<bits/stdc++.h>
       using namespace std;
       int main()
       {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int min = 9, last;
        do{
            last = n % 10;
            if(min > last){
                min = last;
            }
            n /= 10;
        }
        while(n);
        cout<<"Smallest number : "<<min;
       }

Output:- Enter the value of n : 19872
Smallest number : 1 