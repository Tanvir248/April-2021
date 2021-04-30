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
     vector<ll> index1, index2;
     int n, t, k, num1, num2, sum =0;
    cin>>t;
    for(int i=0; i<t; i++){
         cin>>n>>k;
         for (int i = 0; i < n; i++)
         {
              cin>>num1;
              index1.push_back(num1);
         }
         for (int i = 0; i < n; i++)
         {
              cin>>num2;
              index2.push_back(num2);
         }
         sort(index1.B, index1.E);
         sort(index2.B, index2.E);
         reverse(index2.B, index2.E);
         for (int i = 0; i < k; i++)
         {
              if(index1[i]<index2[i])
             swap(index1[i], index2[i]);
         }
         for (int i = 0; i < n; i++)
         {
         // cout<<index1[i]<<" ";
          sum+=index1[i];
          }
    cout<<sum<<endl;
    sum =0;
    index1.clear();
    index2.clear();
    } 
}
int main(){
          
     solve();
    return 0;
}