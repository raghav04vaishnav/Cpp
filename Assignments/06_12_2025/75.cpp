Take 8 numbers as input and print them in descending order.
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        int arr[8];
        cout << "Enter 8 numbers:\n";
        for (int i = 0; i < 8; ++i)
        cin >> arr[i];
        sort(arr, arr + 8, greater<int>()); // Sort in descending order
        cout << "Numbers in descending order:\n";
        for (int i = 0; i < 8; ++i)
        cout << arr[i] << '\n';
        return 0;
     }