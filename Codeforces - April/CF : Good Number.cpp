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
            ll n , k;
            cin>>n>>k;
            string s;
            vector<string>add;
            for (int i = 0; i < n; i++)
            {
                 cin>>s;
                 add.push_back(s);
            }
            
            ll answer = 0;
            for(int i=0;i<n;i++){
		ll value =0;
		for(int j=0;j<=k;j++){
		if(add[i].find(to_string(j)) !=-1)
			++value;
			
		}
		if(value==k+1)
 		++answer;
		
	}
            cout<<answer<<endl;
}
int main(){
     
     solve();
    
     return 0;
}