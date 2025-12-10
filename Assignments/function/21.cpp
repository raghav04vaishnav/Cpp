With Arguments and No Return

Write a function printSquare(int n) that prints the square of the number.

Ans:- #include<bits/stdc++.h>
using namespace std;
void printSquare(int n)
{
    cout<<"Square of "<<n<<" is : "<<n * n;
    
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    printSquare(n);
    return 0;
}

Output:- Enter the value of n : 9
Square of 9 is : 81
