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
    ll n, arr[100], count = 0;
    cin>>n;
    
    for(ll i=0; i<n;i++){
        cin>>arr[i];
        if(arr[i]==1 || arr[i]== 3)
        count++;
        }   
            cout<<count<<endl;
        
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
  return 0;
}
