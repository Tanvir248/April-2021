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
   v<ll> add;
            ll n;
            cin>>n;
            for(int i=1; i<= n; i++){
               add.push_back(i);
               //cout<<i<<" ";
            }
            for(int i=1; i<add.size(); i++){
               cout<<add[i]<<" ";
            }
            cout<<add[0]<<endl;
            
          
}
int main(){
     lln t;
     cin>>t;
     while (t--)
     {
          
     solve();
    
     }
     return 0;
}