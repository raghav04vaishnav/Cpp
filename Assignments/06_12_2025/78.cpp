Take an integer input and check if it is even, odd, or zero.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        if (num == 0)
            cout << "The number is zero";
            else if (num % 2 == 0)
               cout << "The number is even";
        
               else
                  cout << "The number is odd";
        return 0;
     }
