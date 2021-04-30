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
    v<ll>add;
       ll n, num, mod, div;
   
      
           cin>>num;
           if(num<10){
               cout<<1<<e
           }else if(num<20){
               cout<<3<<e
           }else{
               while(num!=0){
                   mod = num%10;
                add.push_back(mod);
                div = num/10;
                num =div;
               }
               n = (add[0]-1)*10;
             if(add.size()==2){
                 cout<<n+3<<e
             }else if(add.size()== 3){
                 cout<<n+6<<e
             }else 
             cout<<n+10<<e
           }
           
           
           
       
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