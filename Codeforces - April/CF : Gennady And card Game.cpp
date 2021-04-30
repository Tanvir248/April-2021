#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define B begin()
#define E end()
#define S size()
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(string s){ 
        string s1,sa="\0";
        v<ls>s2;
      
        ll flag =0;  
  for(int i=0; i<5; i++){
       cin>>s1; 
       sa+=s1;
  }
 
  for(int i=0; i<sa.size(); i++){
       if(s[0]== sa[i]|| s[1]== sa[i]){
            flag =1;
        break;}
        }
       if(flag)
            Y
            else
            N
}
int main(){
     string s;
    cin>>s;
     solve(s);
   
     return 0;
}