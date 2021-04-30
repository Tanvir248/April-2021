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
	
	char s[105];
    ll i,lenth,cnt=0,n;
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]=97+s[i]-65;
        }
    }
    sort(s,s+n);
    for(i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            cnt++;
        }
    }
    if(cnt==25)
        printf("YES\n");
    else
        printf("NO\n");

            /*ls s, s1, s2;
            ll n, cnt =0;
            char i;
            cin>>n;
            
            cin>>s;
			s1 =s;
			transform(s.begin(), s.end(), s.begin(), ::tolower);
           
            if(s1 !=s){
                 cout<<"YES"<<endl;
            }else{
                 cout<<"NO"<<endl;
            }*/
               
}
int main(){
          
     solve();
    return 0;
}