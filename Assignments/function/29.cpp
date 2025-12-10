Write a function printArea(int length, int width) that prints area of rectangle.

#include<bits/stdc++.h>
using namespace std;
void printArea(int length, int width)
{
    int area = length * width;
    cout<<"Area of rectangle : "<<area<<endl;

}
int main()
{
    int length;
    cout<<"Enter length : ";
    cin>>length;

    int width;
    cout<<"Enter width : ";
    cin>>width;

    printArea(length,width);

}

Output:- Enter length : 10
Enter width : 5
Area of rectangle : 50