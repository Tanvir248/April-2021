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
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
         ll n, num;
         vector<ll>copy, ans;
         cin>>n;   
         for (int i = 0; i < n; i++)
         {
              cin>>num;
              copy.push_back(num);
         }
         sort(copy.B, copy.E);
         for (int i = 0; i <copy.size(); i++)
         {
              if(copy[i]==copy[i+1]){
                   continue;
              }else{
                   ans.push_back(copy[i]);
              }
         }
     //     for (int i = 0; i < ans.size(); i++)
     //     {
     //          cout<<ans[i]<<" ";
     //     }
     cout<<ans.size()<<endl;
         
}
int main(){
     lln t;
     cin>>t;
     while (t--)
     {
          
     solve();
    
     }
     return 0;
}