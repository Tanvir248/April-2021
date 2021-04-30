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
        ll n, num;
        ull sum=0, cs=0;
        cin>>n;
        for(int i =0;i<n;i++){
            cin>>num;
           add.push_back(num);
        
        }
        for(int i=0; i<add.size(); i++){
           // sum *= add[i];
            if(ceil((double)sqrt(add[i])) == floor((double)sqrt(add[i]))){
                   sum++;
        }else{
             cs++;
        }
        }
        if(cs >=1){
            Y
        }else if(cs<1)
        N
       
        
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