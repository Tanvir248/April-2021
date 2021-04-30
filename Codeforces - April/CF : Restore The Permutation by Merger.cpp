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
     vector<ll> a;
            unordered_set<int> ans;
            ll n, num;
            cin>>n;
            for (int i = 0; i < n*2; i++)
            {
              cin>>num;
              ans.insert(num);
            }   
            for (const auto& s: ans)
            {
               a.push_back(s);
            }
            ans.clear();
            reverse(a.begin(), a.end());
            for (int i = 0; i < a.size(); i++)
            {
               cout<<a[i]<<" ";
            }
            
           cout<<endl; 
           a.clear();
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
/*  int n ;
    cin >> n ;
    bool num[n+1] = {} ;
    n *= 2;
    vector<int> v(n) , ans;

    for(auto &x : v ){
        cin >> x ;
    }

    for(int i = 0 ; i< n ; i++){
        if(num[v[i]] == false){
            ans.emplace_back(v[i]) ;
            num[v[i]] = true ;
        }
    }

    for(auto x : ans)
        cout << x << " ";
    cout <<endl;*/