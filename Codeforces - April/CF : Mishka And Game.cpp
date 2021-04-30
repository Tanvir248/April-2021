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
 ll n,  m, c;
 cin>>n;
 ll count_m =0, count_c =0;
 for (int i = 0; i < n; i++)
 {
     cin>>m>>c;
     if(m>c){
     count_m++;}
     else if(c>m){
     count_c ++;
     }
 }
 if(count_m == count_c){
     cout<<"Friendship is magic!^^"<<endl;
 }else if(count_m>count_c){
     cout<<"Mishka"<<endl;
 }else {
     cout<<"Chris"<<endl;
 }
    
}

int main() {
        solve();
    return 0;
}