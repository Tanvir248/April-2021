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
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
        ll n;
    cin>>n;
    ll cnt=0;
    for(ll i=1;i<=n/2;i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    
     solve();

     return 0;
}
