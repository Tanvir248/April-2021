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
            ll n1, n2, n3;
            cin>>n1>>n2>>n3;
            ll x = max(n1, n2);
            ll y = max(n1, n3);
            ll z = max(n2, n3);
          if(x==y && x==z && y==z){
                  if(n1==n2 && n1==n3 && n2 ==n3){
                  Y
                  cout<<n1<<" "<<n3<<" "<<n3<<endl;
                  }else{
                        Y
               ll x1 = max(max(n1, n2), n3);
               ll y1 = min(min(n1, n2), n3);
               cout<<x1<<" "<<1<<" "<<y1<<endl;
               }
            }else N
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