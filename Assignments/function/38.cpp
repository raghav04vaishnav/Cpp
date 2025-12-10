Write a function roomService(string roomType, string request)that prints service request details.

#include<bits/stdc++.h>
using namespace std;
void roomService(string roomType, string request)
{
    cout<<"Room Service Request Details\n";
    cout<<"Room type : "<<roomType<<endl;
    cout<<"Requested Service : "<<request<<endl;
    cout<<"Your request has been received. Our staff will be reach shortly.";
}
int main()
{
    string roomType;
    cout<<"enter the Room Type : ";
    getline(cin, roomType);

    string request;
    cout<<"Enter your Service Request : ";
    getline(cin, request);

    roomService(roomType,request);

}

Output:- Enter the Room Type : Delux
Enter your Service Request : Breakfast
Room Service Request Details
Room Type : Delux
Requested Service : Breakfast
Your request has been received. Our staff will be reach shortly. 