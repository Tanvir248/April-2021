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
      ll n, k, l, c, d, p, nl, np;
      cin>>n>> k>> l>> c>> d>> p>> nl>> np;
      ll x = (k*l)/nl;
      ll y = c*d;
      ll z = p/np;
      ll a = min(min(x, y), z)/n;
     cout<<a<<endl;
}
int main(){
       
     solve();
    
     return 0;
}