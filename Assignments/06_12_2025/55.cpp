Take 10 integers and print their sum.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int sum = 0, num;
        cout << "Enter 10 integers:\n";
        for (int i = 0; i < 10; ++i) {
        cin >> num;
        sum += num;
      }
        cout << "Sum of the 10 integers is: " << sum << '\n'; 
        return 0;
       }
