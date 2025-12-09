Create a function showMenu() that has user entered default arguments day.
prints a 3-item food menu based on if day==morning elseif day==evening and else if day==night else “invalid string”.

Ans:- #include<bits/stdc++.h>
using namespace std;
void showMenu()
{
   string day;
   cout<<"Enter the day : ";
   cin>>day;
   
   string morning = "morning";
   string evening = "evening";
   string night = "night";
   
   if(day == morning){
       cout<<"Poha, Upma, Idli";
   }
   else if(day == evening){
       cout<<"Pani - puri, Pav bhaji, Patties";
   }
   else if(day == night){
       cout<<"Chapati, Dal, Rice";
   }
   else{
       cout<<"Invalid string";
   }
	

}
int main()
{
	showMenu();
}

Output:- Enter the day : morning
Poha, Upma, Idli
