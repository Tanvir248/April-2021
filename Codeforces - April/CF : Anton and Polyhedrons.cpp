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
#define SIZE 100
void solve(){ 
	vector<int>add;
           ls s;
		   ln count=0, ans =0;
		   ln t;
		   cin>>t;
		   while(t--){
		   cin>>s;
		   
			   if(s=="Tetrahedron"){
				   count = 4;
			   }
			   if(s=="Cube"){
				   count =6;
			   }
			   if(s=="Octahedron"){
				   count = 8;
			   }
			   if(s=="Dodecahedron"){
				   count =12;
			   }if(s=="Icosahedron"){
				   count = 20;
			   }
			   add.push_back(count);
			   count =0;
			   s.clear();
			   }
			  sort(add.begin(), add.end());
		   for(int i=0; i<add.size(); i++){
			  // cout<<add[i]<<" ";
			   ans +=add[i];
			   if(add[i]==add[i+1]){
				  ans += (add[i]-add[i+1]);
			   }
			  
			   
		   }cout<<ans<<endl;
}
int main(){
    
     solve();

     return 0;
}