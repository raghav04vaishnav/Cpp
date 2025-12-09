Print "I plan to visit __ this summer" where the place is entered by the user. 
Ans :- #include <bits/stdc++.h>
       #include <string>
        using namespace std;
        int main() {
        string place;
        cout << "Enter the place you plan to visit: ";
        getline(cin, place);
        cout << "I plan to visit " << place << " this summer\n";
        return 0;
       }
