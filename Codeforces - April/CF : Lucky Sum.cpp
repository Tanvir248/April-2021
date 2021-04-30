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
            vector<ll>add4, add7;
            lln n1,n2, sum4=0, sum7 =0;
            cin>>n1>>n2;
            for (int i = n1; i <= n2; i++)
            {
               if(i<=4){
                    add4.push_back(4);
               }
               else{
                    add7.push_back(7);
               }
            }

            for (int i = 0; i < add4.S; i++)
            {
                sum4+=add4[i];
            }
            for (int i = 0; i < add7.S; i++)
            {
                sum7+=add7[i];
            }
            cout<<sum4+sum7<<endl;
            
}
int main(){
   
     solve();
 
     return 0;
}
/*
const int maxn  = 1024;
ll luck[maxn];
ll f(int n)
{
	if(n==0)
		return 0;
	int i;
	ll ans=0;
	for(int i=1;i<=maxn;i++)
	{
		if(luck[i]<n)
		{
			ans+=luck[i]*(luck[i]-luck[i-1]);
		}
		else
		{
			ans+=luck[i]*(n-luck[i-1]);
			break; 
		}
	}
	return ans;
}
int main()
{
	luck[1]=4;
	luck[2]=7;
	int t=3;
	for(int i=1;i<512;i++)
	{
		luck[t++]=luck[i]*10+4;
		luck[t++]=luck[i]*10+7;
	}
	int l,r;
	scanf("%d%d",&l,&r);
	printf("%lld\n",f(r)-f(l-1));
	return 0;
} */