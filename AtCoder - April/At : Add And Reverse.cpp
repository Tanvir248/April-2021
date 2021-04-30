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
       vector<ll> add;
       vector<ll> rev;
       vector<int> garbaze;
       lln n;
       lln x, y, ans;
       cin>>n;
       while(n!=0){
           x = n%10;
            if(x>0){
                add.push_back(x);
                rev.push_back(x);
            }else if(x == 0){
                garbaze.push_back(x);   
            }
           y = n/10;
            n = y;
       }
       reverse(add.begin(), add.end());
    if(add == rev){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main(){
     solve();
     return 0;
}