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
         ll n , t , k , d;
         cin>>n>>t>>k>>d;
           
    ll T1 =  t*( (n/k) + (n%k!=0));
    ll T2 =  d + t*(( n-(d/t)*k )/(2*k) +(( n-(d/t)*k )%(2*k)!=0));
    if(T2 < T1) Y
    else N
    
           /* ld ans = (double) n/ (double)k;
            ll ans1 = n/k;
            if(ans >ans1){
                 ans1+=1;
            }
            ll anst = t* ans1;
            //cout<<anst<<"   ";
            if(n<k){
                 N
            }else{
                 double ansr = (double) anst/ (double) d;
                 //cout<<ansr<<"  ""  ";
                 if(ansr > ans1){
                      Y
               }else{
                     if(ansr<ans1){
                          ll x = anst-d;
                           x = x/t;
                           ll f = x/k;
                           if(x>=2){
                                Y
                           }
                         }else 
                         N
               }
               
            }*/
}
int main(){
       
     solve();
    
     return 0;
}