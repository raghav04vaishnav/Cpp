Print "I am working as a __" where the job title is entered by the user. 
Ans :- #include <bits/stdc++.h>
       #include <string>
        using namespace std;
        int main() {
        string job;
        cout << "Enter your job title: ";
        getline(cin, job);  
        cout << "I am working as a " << job << '\n';
        return 0;
       }
