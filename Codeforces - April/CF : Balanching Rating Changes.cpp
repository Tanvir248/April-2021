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
   ll n;
  cin >> n;
  ll flag = 1;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (x % 2 == 0) {
      cout << x / 2;
    } else {
      cout << (x + flag) / 2;
      flag *= -1;
    }cout<<endl;
  }   
}
int main(){
     
          
     solve();
    
     return 0;
}