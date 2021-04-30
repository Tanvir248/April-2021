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
         int n, x;
      bool a[100010];
    while(cin >> n) {
      
        for(int i=0; i<n-1; ++i) {
            cin >> x;
            a[x] = true;
        }
        for(int i=1; i<=n; ++i) {
            if(!a[i]){
                cout << i << endl;
                break;
            }
        }
    }     
}
int main(){
           
     solve();

     return 0;
}
/*  ll n, num;
          vector<ll> a, ans;
         cin>>n;
         ll f = n;
         for (int i = 0; i < n-1; i++)
         {
            cin>>num;
            a.push_back(num);
         }
         sort(a.B, a.E);
         ll x = a.S;
         for (int i = 1; i < a[x-1]; i++)
         {
            ans.push_back(i);
         }
         if(n == 2){
            if(a[0]== 2)
            cout<<1;
            else{
               cout<<2;
            }
         }else{
         if(a[x-1]== f){
         for (int i = 1; i < a[x-1]; i++)
         {
            if(a[i] != ans[i]){
               if(i ==1){
                  cout<<i;
               }else
               {
                  cout<<i+1;
               }
               
               break;
            }
         }
         }else{
            cout<<n;
         }
         }
         
         

cout<<endl; */