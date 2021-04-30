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
int main() {

          vector<ll>input1;
          vector<ll>input2;
          vector<ll>sorted;
          ll t, count=1;
          cin>>t;
         
          while(t--){
              ll n, num, sum1 =0, sum2=0;
              cin>>n;
              for (int i = 0; i < n; i++)
              {
                  cin>>num;
                  input1.push_back(num); 
              }
              ld x, y; ll a, b;
              for (int i = 0; i < n; i++)
              {
                   x = ((ld)input1[i]/29);
                   a =x;
                   //cout<<x<<" ";
                   //cout<<a<<" ";
                   y = (ld)input1[i]/59;
                   b = y;
                   if(x>a){
                        a = a+1;
                        sum1 += (a*10);
                   }
                   if(y >b){
                        b+=1;
                   sum2 +=(b *15);
                   }
              }
              
              if(sum1<sum2){
              cout<<"Case "<<count<<": "<<"Mile "<<sum1<<endl;
              }else if(sum2<sum1){
              cout<<"Case "<<count<<": "<<"Juice "<<sum2<<endl;
              }else if(sum1 == sum2){
                   cout<<"Case "<<count<<": "<<"Mile "<<"Juice "<<sum1<<endl;
              }
              
              input1.clear();
              count++;
          }

	return 0;
}