#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ln= int;
using ld = double;
#define SIZE 1001
void solve(){ 
	ln n, m,cnt=0, arr[SIZE];
	cin>>n>>m;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for (int i = 0; i <m; i++)
	{
		if (arr[i] >= 0)
        {
            break;
        }
		cnt+=arr[i];
	}
	cout<<abs(cnt)<<endl;
	
}
int main(){
    
     solve();

     return 0;
}