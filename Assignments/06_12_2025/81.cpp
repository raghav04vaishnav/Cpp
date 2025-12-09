Take a string and an integer input, then print the string repeated that many times.
Ans :- #include<bits/stdc++.h>
       #include<string>
        using namespace std;
        int main() {
        string text;
        int n;
        cout << "Enter a string: ";
        cin >> text;
        cout << "Enter a number: ";
        cin >> n;
        for (int i = 0; i < n; ++i) {
        cout << text << " ";
      }
        return 0;
    }

