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
#define SIZE 100
void solve(){ 
	ll n;
	ld a; 
	cin>>n;
	 ll arr[n];      
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		if(arr[i] & 1)
		cout<<arr[i]<<" ";
	}
	for(int i=0; i<n; i++){
		if(arr[i] & 1){}
		else
		cout<<arr[i]<<" ";
	}

	cout<<endl;
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