#include <bits/stdc++.h>
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
using namespace std;
 
int main() {
    vector<ll> ans;
    ll n, speed,maxi, value, count =1;
    cin>>n;
while(n--){
      cin>>speed;
      for (int i = 0; i < speed; i++)
      {
        cin>>value;
         ans.push_back(value);
      }
      cout<<"Case "<<count<<": "<<*max_element(ans.begin(), ans.end())<<endl;
      count++;
      ans.clear();
    }
     
 return 0;
 }
