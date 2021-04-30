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

int main(){
     int t, a, count =0, sum =0;
string s;
     
     cin>>t;
     while(t--){

     cin>>s;
     if(s=="donate"){
          cin>>a;
          sum+=a;   
     }else
     cout<<sum<<endl;
     }
     
      
     return 0;
}