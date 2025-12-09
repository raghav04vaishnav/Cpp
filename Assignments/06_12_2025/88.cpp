Take an integer input and check whether it is divisible by 4 but not 8, then print the result.
Ans :- #include <bits/stdc++.h>
        using namespace std;
        int main() {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        if (num % 4 == 0 && num % 8 != 0)
        cout << num << " is divisible by 4 but not by 8\n";
        else
        cout << num << " does not satisfy the condition\n";
        return 0;
   }

