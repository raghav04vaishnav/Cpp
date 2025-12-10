Create a function displayMarks(int math, int sci, int eng) that prints all marks.

#include<bits/stdc++.h>
using namespace std;
void displayMarks(int math, int sci, int eng)
{
    cout<<"Math Marks : "<<math<<"\n";
    cout<<"Science Marks : "<<sci<<"\n";
    cout<<"English Marks : "<<eng<<"\n";

}
int main()
{
    int math;
    cout<<"Enter the marks of math : ";
    cin>>math;

    int sci;
    cout<<"Enter the marks of science : ";
    cin>>sci;

    int eng;
    cout<<"Enter the marks of english : ";
    cin>>eng;

    displayMarks(math,sci,eng);

}

Output:- Enter the marks of math: 74
Enter the marks of science: 79
Enter the marks of english: 84
Math Marks : 74
Science Marks : 79
English Marks : 84