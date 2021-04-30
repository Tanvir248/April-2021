#include <bits/stdc++.h>
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
using namespace std;
 void solve(){
     ll n, arr[101], ar[101];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        ar[i] = arr[i];
    }
    sort(ar, ar+n);
    for(int i =0; i<n; i++){
    if(arr[i] != ar[1]){
      cout<<i+1<<endl;
    }
      }
    
 }
int main() {
   ll t;
   cin>>t;
   while(t--){
       solve();
   }
     
 return 0;
 }
