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
     ll n, sum=0, count=0;
     cin>>n;
     while (sum<=n)
     {
          count++;
         sum+= (count*(count+1))/2;
          
     }
     
     cout<<count-1<<endl;
}
int main(){
    
     solve();
     return 0;
}
