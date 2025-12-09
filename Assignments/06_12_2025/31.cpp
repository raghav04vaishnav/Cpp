Print "I am from __, and my favorite hobby is __" where the city and hobby are entered by the user. 
Ans :- #include <bits/stdc++.h>
       #include <string>
        using namespace std;
        int main() {
        string city, hobby;
        cout << "Enter your city: ";
        getline(cin, city);
        cout << "Enter your favorite hobby: ";
        getline(cin, hobby);
        cout << "I am from " << city << ", and my favorite hobby is " << hobby << "\n";

        return 0;
       }
