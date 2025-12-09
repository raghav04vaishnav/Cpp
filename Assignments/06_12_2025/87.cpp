Take a string input and count the number of vowels in it.
Ans :- #include <bits/stdc++.h>
       #include <string>
        using namespace std;
        int main() {
        string str;
        cout << "Enter a string: ";
        getline(cin, str);
        int count = 0;
        for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
      }

        cout << "Number of vowels: " << count << '\n';
       return 0;
  }
