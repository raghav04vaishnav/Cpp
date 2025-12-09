Take a string input and print it in reverse.
Ans:- #include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;   

    string rev = "";  

    for (int i = str.length() - 1; i >= 0; i--) {
        rev = rev + str[i];   
    }

    cout << "reverse string: " << rev;
    return 0;
}