Take 10 float inputs and print them. 
Ans :- #include<bits/stdc++.h>
        using namespace std;
        int main() {
        float numbers[10];
        cout << "Enter 10 float numbers:\n";
        for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
      }
        cout << "You entered: ";
        for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
      }
        return 0;
    }
