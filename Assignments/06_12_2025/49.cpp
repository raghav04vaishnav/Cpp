#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2, temp;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    temp = str1;
    str1 = str2;
    str2 = temp;

    cout << "\nAfter Swapping:\n";
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;

    return 0;
}
