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
            ll n, num;;
            vector<int> arr;
            vector<int> A;
            vector<int> B;
            cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    ll result = arr[n-1]- arr[0];
    for (int i = 0; i < n; i++)
    {
        for(int j =i + 1; j<n; j++){
            result =min(result, arr[j]-arr[i]);
        }
    }
    cout<<result<<endl;    
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