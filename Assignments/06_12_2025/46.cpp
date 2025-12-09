 Take an input from the user and check whether it is positive, negative, or zero, then print the result. 
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        double num;
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0)
        cout << "The number is positive.\n";
        else if (num < 0)
        cout << "The number is negative.\n";
        else
        cout << "The number is zero.\n";

        return 0;
       }
