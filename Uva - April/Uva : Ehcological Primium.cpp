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

int main(){
     ll t, sum =0;
     cin>>t;
     while (t--)
     {
          int n;
          cin>>n;
         for(int i=0; i<n; i++){
              ll size, animals, e_f;
              cin>>size>>animals>>e_f;
           
            sum +=size*e_f;
          }
       cout<<sum<<endl;
       int count =0;
       sum = count;
     }
    
     return 0;
}