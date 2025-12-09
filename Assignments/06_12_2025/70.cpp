Take 10 integers as input and print the sum of even numbers.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int num, sum = 0;
        cout << "Enter 10 integers:\n";
        for (int i = 0; i < 10; ++i) {
        cin >> num;
        if (num % 2 == 0) {
        sum += num;
        }
    }

       cout << "Sum of even numbers is: " << sum << '\n';
       return 0;
 }
