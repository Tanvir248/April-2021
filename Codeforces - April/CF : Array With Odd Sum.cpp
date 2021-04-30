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
#define c1 cin>>
#define c2 cout<<
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl;
#define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
	ll n;
	c1 n;
    ll arr[n];
		int sum=0;
		int sumj=0;
		int sumo=0;
		for(int i=1;i<=n;i++) 
		{
			c1 arr[i];
			sum+=arr[i];
			if(arr[i]%2) sumj++;
			else sumo++;
		}
		if(sum&1) Y
		else if(sumj&&sumo) Y
		else N
	        
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