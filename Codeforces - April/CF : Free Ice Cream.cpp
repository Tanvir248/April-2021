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
void solve(){ 
     
      ll m, n, packet, cnt =0;
      cin>>n>>m;
      lln ans = m;
      char  type;
     for (ll i = 0; i < n; i++)
     {
          cin>>type>>packet;
          if (type =='+')
          {
              ans += packet;
          }else if(ans >=packet){
                    ans-= packet; 
          }else{
               cnt++;
          }
          
     }
     cout<<ans<<" "<<cnt<<endl;
}
int main(){
     
     solve();
    
     return 0;
}#include<bits/stdc++.h>
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
void solve(){ 
     
      ll m, n, packet, cnt =0;
      cin>>n>>m;
      lln ans = m;
      char  type;
     for (ll i = 0; i < n; i++)
     {
          cin>>type>>packet;
          if (type =='+')
          {
              ans += packet;
          }else if(ans >=packet){
                    ans-= packet; 
          }else{
               cnt++;
          }
          
     }
     cout<<ans<<" "<<cnt<<endl;
}
int main(){
     
     solve();
    
     return 0;
}