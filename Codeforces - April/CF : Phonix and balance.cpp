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
           lln a[33];
    ll t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n;
        ll k=1;
        for(i=1; i<=n; i++)
        {
            a[k++]=pow(2,i);
        }
        lln b=0,c=0;
        for(i=1; i<=n/2-1; i++)
        {
            b+=a[i];
        }
        b+=a[n];
        for(i=n/2; i<=n-1; i++)
        {
            c+=a[i];
        }
        if(b>c)
            cout<<b-c<<e
        else
            cout<<c-b<<e
    }
}
int main(){
      
     solve();
     return 0;
}