Take 4 float inputs and print their average.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        float a, b, c, d;
        cout << "Enter four float numbers: ";
        cin >> a >> b >> c >> d;
        float avg = (a + b + c + d) / 4;
        cout << "Average = " << avg << '\n';
        return 0;
       }
