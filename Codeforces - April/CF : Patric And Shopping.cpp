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
         vector<int> solve;
         lln n1,n2,n3;
         cin>>n1>>n2>>n3;
        ll ans=n1+n2+n3; solve.push_back(ans);
    ll ans1=2*n1+2*n2;solve.push_back(ans1);
   ll ans3=2*n1+2*n3;solve.push_back(ans3);
    ll ans4=2*n2+2*n3;solve.push_back(ans4);
   sort(solve.B,solve.E);
   cout<<solve[0]<<endl;
    
}
int main(){
       
     solve();
  
     return 0;
}