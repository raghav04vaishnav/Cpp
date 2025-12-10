Create a function multiply(int a, int b) that prints
 “Product = …”

 #include<bits/stdc++.h>
 using namespace std;
 void multiply(int a, int b);
 {
    int prod = a * b;
    cout<<"Product is : "<<prod;

 }
 int main()
 {
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    multiply(a,b);

 }

 Output:- Enter two numbers : 12 6
 Product is : 60 