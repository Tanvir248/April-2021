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
  ll n, arr[100];
  cin>>n;
  for(int i = 0; i < n; i++)
  {
     cin>>arr[i];
  }
  
     ll y = (n-1)/2;
  sort(arr, arr+n);
      if(n==1){
         cout<<arr[0];
      }else if(n==2){
         cout<<arr[1];
      }else if(n==3)
      {
         cout<<arr[1];
      }else if(n==4)
      {
         cout<<arr[2];
      }else
      {
         cout<<arr[2];
      }
      
      
   cout<<endl;
}
int main(){
        
     solve();
 
     return 0;
}