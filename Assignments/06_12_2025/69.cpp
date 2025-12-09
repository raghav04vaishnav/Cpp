Take an integer input and check if it is divisible by 7 or 11, then print "Yes" or "No".
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        if (n % 7 == 0 || n % 11 == 0)
        cout << "Yes";
        else
        cout << "No";
        return 0;
       }
