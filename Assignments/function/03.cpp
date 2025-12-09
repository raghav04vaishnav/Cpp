 Write a function printLine() that prints 30 stars (***************).(for while do)

Ans:- a) #include<bits/stdc++.h>
          using namespace std;
          void printLine()
      {
           int n;
	   cout<<"Enter the value of n : ";
	   cin>>n;
	
	for(int i = 1; i <= n; i++){
	    cout<<" * ";
	    
      }
  }
int main()
{
	printLine();
}

Output :- Enter the value of n : 30
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 

b) #include<bits/stdc++.h>
    using namespace std;
    void printLine()
  {
        int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	

       int i = 1;
       while(i <= n){
        cout<<" * ";
        i++;
    }
}
int main()
{
	printLine();
}

Output:- Enter the value of n : 30
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 

c) #include<bits/stdc++.h>
    using namespace std;
    void printLine()
  {
        int n;
	cout<<"Enter the value of n : ";
	cin>>n;

       int i = 1;
    
    do{
        cout<<" * ";
        i++;
    }
    while(i <= n);
    
}
int main()
{
	printLine();
}

Output :- Enter the value of n : 30
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 