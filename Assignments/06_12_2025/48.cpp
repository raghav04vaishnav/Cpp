Take 20 float inputs from the user and print them. 
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        float numbers[20];
        cout << "Enter 20 float numbers:\n";
        for (int i = 0; i < 20; ++i) {
        cin >> numbers[i];
       }
        
        cout << "You entered:\n";
        for (int i = 0; i < 20; ++i) {
        cout << numbers[i] << '\n';  // using '\n' instead of endl
       }

        return 0;
       }
