Take an integer input and check if it is a perfect square.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int n;
        cout << "Enter an integer: ";
        cin >> n;
        if (n < 0) {
        cout << "Negative numbers cannot be perfect squares.\n";
        return 0;
       }
        int root = sqrt(n);
        if (root * root == n)
        cout << n << " is a perfect square.\n";
        else
        cout << n << " is not a perfect square.\n";
        return 0;
       }
