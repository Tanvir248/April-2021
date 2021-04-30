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
      ll m,n, num, a, b;
      v<ll>arr={0};
      cin>>n;
      for (int i = 0; i < n; i++)
      {
           cin>>num;
           arr.push_back(num);
      }
      cin>>m;
      for (int i = 0; i < m; i++)
      {
          cin>>a>>b;
          arr[a-1]+= b-1;
          arr[a+1] += arr[a]-b;
          arr[a] = 0;
      }
      for (int i = 1; i <=n; i++)
      {
          cout<<arr[i]<<endl;
      }
      
          
}
int main(){
        
     solve();
   
     return 0;
}