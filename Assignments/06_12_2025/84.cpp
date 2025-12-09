Take 6 numbers as input and print the sum of odd numbers.
Ans :- #include<bits/stdc++.h>
        using namespace std;
        int main() {
        int num, sum = 0;
        for (int i = 0; i < 6; ++i) {
        cin >> num;
        if (num % 2 != 0)
          sum += num;
      }
        cout << "Sum of odd numbers: " << sum;
        return 0;
    }
