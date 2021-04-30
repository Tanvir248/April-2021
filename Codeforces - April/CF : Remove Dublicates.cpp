
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
     v<lln>add, ans;
          ll n, num1;
          cin>>n;
          bool num[n+1]={};
          for (int i = 0; i <n; i++)
          {
               cin>>num1;
               add.push_back(num1);
          }
          reverse(add.B, add.E);
         for(int i = 0 ; i< n ; i++){
          if(num[add[i]] == false){
            ans.push_back(add[i]) ;
            num[add[i]] = true ;
        }
        }
        cout<<ans.size()<<endl;
        for (int i = ans.size()-1; i >=0; i--)
        {
             cout<<ans[i]<<" ";
        }
        ans.clear();
        cout<<endl;
         }    
int main(){
        
     solve();
    
     return 0;
}