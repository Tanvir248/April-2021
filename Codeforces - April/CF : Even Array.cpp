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
#define SIZE 101

void solve() {
 int arr[SIZE];
    ll n, count=0, count1=0;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    if(arr[i]%2 != i%2 ){
            if(i%2==0){
              count++;}
            else{
            count1++;}
        }

    }
    if(count!=count1){
        cout<<-1<<endl;
    }else{
        cout<<count<<endl;
    }
    
}

int main() {
    ll n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}