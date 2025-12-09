Take 5 numbers as input and print the largest one.
Ans :- #include<bits/stdc++.h>
        using namespace std;
        int main() {
        int a, b, c, d, e;
        cout << "Enter 5 numbers: ";
        cin >> a >> b >> c >> d >> e;
        int largest = a;
        if (b > largest) largest = b;
        if (c > largest) largest = c;
        if (d > largest) largest = d;
        if (e > largest) largest = e;
        cout << "The largest number is: " << largest << "\n";
        return 0;
    }
