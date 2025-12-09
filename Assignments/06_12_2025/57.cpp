Take a number from the user and print whether it is a multiple of 10. 
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 10 == 0)
        cout << num << " is a multiple of 10\n";
        else
        cout << num << " is not a multiple of 10\n";

        return 0;
       }
