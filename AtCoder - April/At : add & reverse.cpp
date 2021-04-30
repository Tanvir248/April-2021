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
            string s, rev, ans;
            
            cin>>s;
            ans = s;
           string b ={'0'};
            if(s[0] == '0'){
                s= s+b;
                 rev =s;

            }
            int x = s.size();
            if(s[x-1]== '0'){
               s = b+s;
               rev =s;
              }
              reverse(s.begin(), s.end());
              reverse(rev.begin(), rev.end());
            if(s ==rev || s == ans){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
}
int main(){
    
     solve();
     return 0;
}