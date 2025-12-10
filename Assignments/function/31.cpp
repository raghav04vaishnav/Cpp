Write a function showBill(int quantity, float price) that prints total bill.

#include<bits/stdc++.h>
using namespace std;
void showBill(int quantity, float price)
{
    float total = quantity * price;
    cout<<"Total Bill : "<<total<<endl;

}
int main()
{
    int quantity;
    cout<<"Enter the quantity : ";
    cin>>quantity;

    int price;
    cout<<"Enter the price per item : ";
    cin>>price;

    showBill(quantity,price);

}

Output:- Enter the quantity : 1500
Enter the price per item : 199.00
Total Bill : 298500