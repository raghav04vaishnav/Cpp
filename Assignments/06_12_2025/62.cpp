Take an input number and print whether it is a palindrome.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int num, r = 0, a, digit;
        cout << "Enter a number: ";
        cin >> num;
        a = num;
        while (num > 0) {
        digit = num % 10;
        r = r * 10 + digit;
        num /= 10;
       }
        if (a == r)
        cout << "The number is a palindrome\n";
        else
        cout << "The number is not a palindrome\n";
        return 0;
       }
