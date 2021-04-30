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
        ll arr[5];
    for (int i = 1; i <= 4; i ++)
        cin >> arr[i];
    string s;
    cin >> s;
    ll sum = 0;
    for (ll i = 0 ;i < s.size(); i ++)
        sum += arr[s[i]-'0'];
    cout << sum << endl;
}
int main(){
    
     solve();

     return 0;
}
