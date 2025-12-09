 Take 15 float inputs from the user and print them. 
Ans :- #include <bits/stdc++.h>
        using namespace std;

        int main() {
        float numbers[15];

        cout << "Enter 15 float numbers:\n";
        for (int i = 0; i < 15; ++i) {
        cin >> numbers[i];
       }

        cout << "You entered:\n";
        for (int i = 0; i < 15; ++i) {
        cout << numbers[i] << '\n';
       }

        return 0;
       }
