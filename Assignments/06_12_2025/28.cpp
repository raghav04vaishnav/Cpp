Print "I have completed __ from __" where the degree and institution are entered by the user.
Ans :- #include <bits/stdc++.h>
       #include <string>
        using namespace std;
        int main() {
        string degree, institution;
        cout << "Enter your degree: ";
        getline(cin, degree);
        cout << "Enter your institution: ";
        getline(cin, institution);
        cout << "I have completed " << degree << " from " << institution << '\n';
        return 0;
       }
