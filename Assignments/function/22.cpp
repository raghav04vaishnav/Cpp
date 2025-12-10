Create a function greetUser(string name) that prints
 “Hello, <name>!”.

Ans:- #include<bits/stdc++.h>
using namespace std;
void greetUser(string Name)
{
    cout<<"Hello, "<<Name<<"!";
    
}
int main()
{
    
    string userName;
    cout<<"Enter the value of string : ";
    cin>>userName;
    
    greetUser(userName);
    
}

Output:- Enter the value of string :- Raghav
Hello, Raghav!
