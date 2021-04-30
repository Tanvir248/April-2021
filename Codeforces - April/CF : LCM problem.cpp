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
   ll n, m;
   cin>>n>>m;
   if(2*n<=m)
     cout<<n<<" "<<2*n<<endl;
     else
     cout<<-1<<" "<<-1<<endl;
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