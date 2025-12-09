 Take a list of 5 numbers from the user and print them. 
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int numbers[5];
        cout << "Enter 5 numbers:\n";
        for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
       }
        cout << "You entered:\n";
        for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << '\n';
      }

        return 0;
      }
