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
          vector<ll> arr;
          ll n, m, isPrime;
          cin>>n>>m;
          for(ll i = 2; i <= 50; i++){
        isPrime = 0;
        for(ll j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }
           
        if(isPrime==0 && 50!= 1)
            //cout << i << " ";
    arr.push_back(i);
    }
    ll flag =0;
    for (int i = 0; i < arr.size(); i++)
    {
         //cout<<arr[i]<<" ";
         if(arr[i]== n && arr[i+1]== m){
              flag = 1;
              break;
         }
    }
    if(flag) Y
    else N
            
}
int main(){
       
     solve();
    
     return 0;
}