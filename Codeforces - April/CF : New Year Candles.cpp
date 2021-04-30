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
#define C1 cin>>
#define c2 cout<<
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl; #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
        ll a,b,sum=0,c;
    C1 a>>b;
    sum=a;
    while(1){
        c=a/b;
        a=c+(a%b);
        sum+=c;
        if(a<b)
            break;
    }
    c2 sum<<e
           
}
int main(){
     solve();
     return 0;
}