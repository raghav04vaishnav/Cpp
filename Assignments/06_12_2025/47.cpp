Take an input from the user and check whether it is even or odd, then print the result. 
Ans :- #include <bits/stdc++.h>
        using namespace std;

        int main() {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0)
        cout << num << " is even\n";
        else
        cout << num << " is odd\n";

        return 0;
       }
