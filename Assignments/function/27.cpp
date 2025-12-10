Write a function checkEligibility(int age)
 (if age >= 18 → print "Eligible", else "Not Eligible").

 #include<bits/stdc++.h>
 using namespace std;
 void checkEligibility(int age)
 {
    if(age >= 18)
    {
        cout<<"Eligible";
    }
    else{
        cout<<"Not Eligible";
    }
 }
 int main()
 {
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    checkEligibility(age);

 }

 Output:- Enter your age : 20
 Eligible