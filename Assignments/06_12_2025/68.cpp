Take two strings as input and check if they are anagrams, then print the result.
Ans :- #include<bits/stdc++.h>
       #include<string>
        using namespace std;

        int main() {
        string str1, str2;
        cout << "Enter first string: ";
        cin >> str1;
        cout << "Enter second string: ";
        cin >> str2;
        transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
        transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        if (str1 == str2)
        cout << "The strings are anagrams.\n";
        else
        cout << "The strings are not anagrams.\n";
        return 0;
      }
