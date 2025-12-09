Calculate the average of 5 numbers entered by the user and print the result. 
Ans :- #include<bits/stdc++.h>
        using namespace std;

        int main() {
        double n1, n2, n3, n4, n5;
        cout << "Enter five numbers: ";
        cin >> n1 >> n2 >> n3 >> n4 >> n5;
        double average = (n1 + n2 + n3 + n4 + n5) / 5;
        cout << "The average is: " << average << "\n";
    
        return 0;
       }
