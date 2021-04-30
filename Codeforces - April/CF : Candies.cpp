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
        ll ans, num1, num2, ans1, ans2;
        cin>>num1>>num2;
    ans = num1/num2;
    ans1 = num1%num2;
      if(ans1 == 0){
         for (int i = 0; i < num2; i++)
         {
            cout<<ans<<" ";
         }  
      }else{
         for (int i = 0; i < num2-ans1; i++)
         {
            cout<<ans<<" ";
         }
         
         for (int i = 0; i < ans1; i++)
         {
            cout<<ans+1<<" ";
         }
         
      }
      cout<<endl;
}
int main(){
  
          
     solve();
    
     return 0;
}