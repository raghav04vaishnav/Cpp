Find power of a using loop.(for, while and do - while)
Ex:- 2 ^ 5 = 32(no pow()allowed)

Ans:-a)  #include<bits/stdc++.h>
          using namespace std;
          int main()
          {
            int n;
            cout<<"Enter the value of n : ";
            cin>>n;
            int p;
            cout<<"Enter the value of power : ";
            cin>>p;

            int r = 1;
            for(int i = 1; i <= p; i++){
                r *= n;
            }
            cout<<n<<" ^ "<<p<<" : "<<r;

          }

    Output:- Enter the value of n : 2
    Enter the value of power : 5
    2^5 : 32
    
    b) #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,p;
            cout<<"Enter the value of n : ";
            cin>>n;
            cout<<"Enter the value of power : ";
            cin>>p;

            int r = 1, i = 1;
            while(i <= p){
                r *= n;
                i++;
            }
            cout<<n<<" ^ "<<p<<" : "<<r;
        }

    Output:- Enter the value of n : 3
    Enter the value of power : 9
    3^9 : 19863

    c) #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,p;
            cout<<"Enter the value of n : ";
            cin>>n;
            cout<<"Enter the value of power : ";
            cin>>p;

            int r = 1, i = 1;
            do{
                r *= n;
                i++;
            }
            while(i <= p);
            cout<<n<<" ^ "<<p<<" : "<<r;
        }

    Output:- Enter the value of n : 5
    Enter the value of power : 5
    5^5 : 3125