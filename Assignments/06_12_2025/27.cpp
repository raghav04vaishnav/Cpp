Print "I live in __" where the city is entered by the user.
Ans :- #include <bits/stdc++.h>
        using namespace std;
        int main() {
        string city;
        cout << "Enter your city: ";
        cin >> city;  // takes single-word input
        cout << "I live in " << city << '\n';  // using '\n' instead of endl
        return 0;
       }
