Write a function printDefaultMarks() that creates variables inside function:
 math = 60, science = 70, english = 75
 and prints them.

Ans:- #include<bits/stdc++.h>
using namespace std;
void printDefaultMarks()
{
    int m = 60;
    int s = 70;
    int e = 75;
    
    cout<<"Math Marks : "<<m<<endl;
    cout<<"Science Marks : "<<s<<endl;
    cout<<"English Marks : "<<e<<endl;
    
}
int main()
{
    printDefaultMarks();
    
}

Output:- Math Marks : 60
Science Marks : 70
English Marks : 75
