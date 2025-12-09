Take 10 integer inputs from the user and print them. 
Ans :- #include <bits/stdc++.h>
        using namespace std;

        int main() {
        int numbers[10];

        cout << "Enter 10 integers:\n";

        for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
      }

        cout << "You entered:\n";

        for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << '\n';
    }

        return 0;
       }
