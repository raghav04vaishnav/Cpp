Print "I am interested in __ as a career" where the career field is entered by the user. 
Ans :- #include <bits/stdc++.h>
       #include <string>
        using namespace std;
        int main() {
        string career;
        cout << "Enter your career field: ";
        getline(cin, career);
        cout << "I am interested in " << career << " as a career\n";
        return 0;
       }

