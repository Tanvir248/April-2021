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
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
  vector<ll> even, odd;
      ll num, sum1=0, sum2=0;
      cin>>num;
      if(num == 2)
      { N }
  else if(ceil(log2(num)) == floor(log2(num)))
  {
      Y
    for(int i=1; i<=num; i++){
        if(i%2==0)
        even.push_back(i);
    else{
        odd.push_back(i);
    }
    }
    for(int i=0; i<=(num/2)-1; i++){
        cout<<even[i]<<" ";
        sum1+=even[i];
        //cout<<odd[i]<<" ";
    }
    for(int i=0; i<=(num/2)-2; i++){
         
   
        cout<<odd[i]<<" ";
       sum2+=odd[i]; 
    } cout<<sum1-sum2<<endl;
    }
  else{
      N
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
/*     lln n ;
    cin >> n;
    lln sz = n/2 + (n%2);
    if(sz&1){
        N
        return ;
    }
    Y
    vector<long long > a(sz) , b(sz);
    long long x = 2 ;
    for(int i = 0 ; i < sz ; i++){
        a[i] = x ;
        b[i] = x-1;
        x += 2 ;
    }
   
    b[sz-1] += (sz) ;
    for(auto t : a){
        cout << t << " ";
    }
    for(auto t : b){
        cout << t << " ";
    }
    cout << endl ;   */