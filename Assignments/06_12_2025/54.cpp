Take an integer input and check if it is divisible by 3 and 5, then print "Yes" or "No". 
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 3 == 0 && num % 5 == 0)
        cout << "Yes";
        else
        cout << "No";
        return 0;
       }
