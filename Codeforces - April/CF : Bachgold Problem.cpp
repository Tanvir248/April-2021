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
   lln n;
   cin>>n;
   cout<<n/2<<e
   ll m= n/2;
   if(n%2 !=0){
   for(int i=0; i<m-1; i++){
	   cout<<2<<" ";
   }
   cout<<3<<" ";
   }else{
	   for (int i = 0; i < m; i++)
	   {
		   cout<<2<<" ";
	   }
	   
   }
}
int main(){
      
     solve();
     return 0;
}