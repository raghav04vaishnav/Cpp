 Take a number and print its factorial.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        long long fact = 1;
        for (int i = 1; i <= n; ++i) {
        fact *= i;
       }
        cout << "Factorial of " << n << " is " << fact << '\n';
        return 0;
       }
