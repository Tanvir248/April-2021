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
#define SIZE 100
void solve(){
      char s[10];
    
     cin>>s;
     int x = strlen(s);

     if(x>4){
          cout<<3<<endl;
     }else {
           ll count =0;
          if(s[0] =='o') count++;
          if(s[1] =='n') count++;
          if(s[0] =='e') count++;
    
           if(count>=1)
           cout<<1<<endl;
     else 
     cout<<2<<endl;
     }
}
int main(){

     ll t;
     cin>>t;
     while(t--){
          solve();
     }
     
     return 0;
}