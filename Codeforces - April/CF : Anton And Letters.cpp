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
          ls s, s1, s3;
          char ch[50],i;
          getline(cin, s);
          ll n =s.size();
          ll cnt =0, cnt1 =0;
          //cout<<n<<endl;
          for(i ='a'; i<='z'; i++){
          s1.push_back(i);
          }
          for(int i=0; i<s.size(); i++){
              for(int j =0; j<s1.size(); j++){
                   if(s[i]== s1[j]){
                        s3.push_back(s1[j]);
                         cnt++;
                   }     
              } 
              
               }
          sort(s3.begin(), s3.end());
     for(int i=0; i<s3.size(); i++){
          //cout<<s3[i]<<" ";
          if(s3[i]== s3[i+1]){
               cnt1++;
          }
     }
     ll ans = cnt-cnt1;
     cout<<ans<<endl;  
}
int main(){
    
          
     solve();
  
     return 0;
}