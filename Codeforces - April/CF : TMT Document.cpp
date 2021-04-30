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

	ll countm=0, countt=0, count;
           ls s;
		  ll n;
		  cin>>n;
		  	   cin>>s;
		   for (int i = 0; i <s.size(); i++)
		   { 
		
			   if(s[i]=='M'){
				   countm++;
			   }else{
				   countt++;
			   }
		   }

		    if(countt/countm != 2){
				cout<<"NO"<<endl;
			}else{
				ll flag =0;
				for(int i=0; i<s.size(); i++)
				{
					if(s[i]=='T'){
						count++;
					}else{
						count--;
					}if(count<0){
						flag =1;
						break;
					}
				}
				if(flag){
					cout<<"NO"<<endl;
				}else{
				reverse(s.begin(), s.end());
				ll flag =0;
				for(int i=0; i<s.size(); i++)
				{
					if(s[i]=='T'){
						count++;
					}else{
						count--;
					}if(count<0){
						flag =1;
						break;
					}
				}
				if(flag){
					cout<<"NO";
				}else
				cout<<"YES"<<endl;
				} 
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