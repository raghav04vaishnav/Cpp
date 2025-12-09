Print "My name is __" where the name is entered by the user.
Ans :- #include <bits/stdc++.h>
        using namespace std;
        int main() {
        string name;
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "My name is " << name << '\n';
        return 0;
       }
