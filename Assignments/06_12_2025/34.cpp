Print "I am __ years old and I enjoy __" where the age and favorite activity are entered by the user. 
Ans :- #include <bits/stdc++.h>
       #include <string>
        using namespace std;
        int main() {
        int age;
        string activity;
        cout << "Enter your age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Enter your favorite activity: ";
        getline(cin, activity);
        cout << "I am " << age << " years old and I enjoy " << activity << '\n';
        return 0;
       }
