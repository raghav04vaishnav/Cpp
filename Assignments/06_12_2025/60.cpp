Take 6 integers as input and print the largest one. 
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int a, b, c, d, e, f;
        cout << "Enter 6 integers: ";
        cin >> a >> b >> c >> d >> e >> f;
        int largest = a;
        if (b > largest) largest = b;
        if (c > largest) largest = c;
        if (d > largest) largest = d;
        if (e > largest) largest = e;
        if (f > largest) largest = f;
        cout << "The largest number is: " << largest << '\n';
        return 0;
       }
