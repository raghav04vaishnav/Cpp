Calculate the difference between two numbers and print the result. If the result is negative, convert it to positive using math. 
Ans :- #include<bits/stdc++.h>
       #include<cmath>
        using namespace std;

        int main() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        int difference = std::abs(a - b);
        cout << "The difference between the two numbers is: " << difference << '\n';

        return 0;
       }
