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
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
    ll n, cnt1=0, cnt2=0;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     ll cnt =0;
     int mini = arr[0];
    for(int i=0; i<n; i++){
    if(mini>=arr[i]){
        mini = arr[i];
        cnt = i;
    }             
    }
    ll sum =0;
    int maxi = arr[0];
    for(int i=0; i<n; i++){
    if(maxi<arr[i]){
        maxi = arr[i];
        sum =i;
    }             
    }
    //cout<<cnt<<endl;   
    //cout<<sum<<endl;
    n = n-1;
    if(cnt>sum){
        cout<<(sum -cnt)+n<<endl;
    }else{
        cout<<((sum) -(cnt+1))+n<<endl;
    }     
}
int main(){
          
     solve();
    return 0;
}