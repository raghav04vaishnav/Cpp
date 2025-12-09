Take 7 float numbers as input and print their average rounded to two decimal places.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        float num, sum = 0.0;
        cout << "Enter 7 float numbers:\n";
        for (int i = 0; i < 7; ++i) {
        cin >> num;
        sum += num;
      }
        float average = sum / 7;
        cout << fixed << setprecision(2);
        cout << "Average: " << average << '\n';
        return 0;
    }
