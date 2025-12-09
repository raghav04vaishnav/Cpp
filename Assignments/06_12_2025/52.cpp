#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence = "I am Raghav Vaishnav";
    string word = " ";
    int i = 0,n = sentence.length();
    
    for(int i = 0; i < n; i++){
        if(sentence[i]!= ' '){
            word = word + sentence[i];
            
        }
        else{
            cout<<word<<"\n";
            word = " ";
            
        }
    }
    cout<<word;
    
}
