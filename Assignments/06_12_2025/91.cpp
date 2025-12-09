 Print a floating-point number (e.g., 5.67) using cout.
Ans :- #include<bits/stdc++.h>
       #include<iomanip> // for setprecision and fixed
        using namespace std;
        int main() {
        float num = 5.67;
        cout << fixed << setprecision(2) << num;
        return 0;
     }
