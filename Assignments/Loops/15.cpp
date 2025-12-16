Product of digit oda number.(using for, while and do - while loop)
Ex:- 345 ----> 3 * 4 * 5 = 60

a) #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int prod = 1;
        for(int i = n; i > 0; i++){
            int digit = i % 10;
            prod *= digit;
        }
        cout<<"Product is : "<<prod;
    }

Output:- Enter the value of n : 345
Product is : 60

b) #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;

        int prod = 1, i = n;
        while(i){
            int digit = i % 10;
            prod *= digit;
            i /= 10;
        }
        cout<<"Product is : "<<prod;
    }

Output:- Enter the value of n : 12345
Product is : 120

c) #include<bits/stdc++.h>
    using namespace std;
    int main()
   {
     int n;
     cout<<"Enter the value of n : ";
     cin>>n;

     int prod = 1, i = n;
     do{
        int digit = i % 10;
        prod *= digit;
        i /= 10;
     }
     while(i);
     cout<<"Product is : "<<prod;
   }

Output:-Enter the value of n : 45687
Product is : 6720