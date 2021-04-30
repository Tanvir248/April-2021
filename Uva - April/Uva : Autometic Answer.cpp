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
   ll n, x, y, z, a,b, ans;
   char s[100];
   cin>>n;
   b = n*567;
   x = b/9;
   y=x+7492;
   z=y*235;
   a=z/47;
   ans = a-498;
  // cout<<ans<<endl;
   ll count =0, x1, y1;
   vector<int> solve;
   while(ans !=0){
      y1 = ans% 10;
      solve.push_back(y1);
     // cout<<y1<<endl;
      x1 = ans/10;
   ans = x1;
   count++;
   if(count==2)
   break;
   }
   if(solve[1]>=0)
   cout<<solve[1]<<endl;
   else{
      int ans1 = -(solve[1]);
      cout<<ans1<<endl;
   }
}
int main()
{
  ll t;
  cin>>t;
  while(t--){
     solve();
  }
}
/*Best answer
#include<bits/stdc++.h>
int main()
{

    int test_case,n,i;
    while((scanf("%d",&test_case)==1))
    {
        for(i=0; i<test_case; i++)
        {
            scanf("%d",&n);
            n=n*567;
            n=n/9;
            n+=7492;
            n*=235;
            n/=47;
            n=n-498;
            n/=10;
            n%=10;
            n=abs(n);
            printf("%d\n",n);
        }
    }
    return 0;
}*/