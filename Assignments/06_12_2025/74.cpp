Take a string input and check if it contains any vowels.
Ans :- #include<bits/stdc++.h>
       #include<string>
        using namespace std;

        int main() {
        string str;
        cout << "Enter a string: ";
        getline(cin, str);
        bool hasVowel = false;
        for (char ch : str) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            hasVowel = true;
            break;
        }
    }

       if (hasVowel)
        cout << "The string contains vowels.\n";
        else
        cout << "The string does not contain any vowels.\n";
        return 0;
}
