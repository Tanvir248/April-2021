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
    lln n1, n2;
    lln ans1, ans2;
    cin>>n1>>n2;
     ans1 = n1*n2;
     if(ans1%2 ==0){
          cout<<ans1/2<<endl;
     }else{
          ld x = (double) n2/2;
          ll y = n2/2;
          ans2 = (ans1-n2)/2;
          if(x>y){
               cout<<ans2+(y+1)<<endl;
          }else{
               cout<<(ans2+y)<<endl;
          }
     }

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