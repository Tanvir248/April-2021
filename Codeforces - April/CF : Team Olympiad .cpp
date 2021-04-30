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
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl; #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
        v<ll> t1, t2, t3;
        ll n, num;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>num;
            if(num==1){
                t1.push_back(i);
            }else if(num ==2){
                t2.push_back(i);
            }else t3.push_back(i);
        } 
        int mn = min(min(t1.size(), t2.size()), t3.size()); 
        cout<<mn<<e
        for (int i = 0; i <mn; i++)
        {
            cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<e
        }
           
}
int main(){
     solve();
     return 0;
}