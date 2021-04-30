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
void solve(ll count){
     ll a , b, c;
     cin>>a>>b>>c;
     if(a<=20 && b<=20 && c<=20){
          cout<<"Case "<<count<<":"<<" Good"<<endl;
     }else{
          cout<<"Case "<<count<<":"<<" Bad"<<endl;
     }
     }

int main(){

     ll t,casef =0;
     cin>>t;
     while(t--){
          casef++;
          solve(casef);
     }
     
     return 0;
}