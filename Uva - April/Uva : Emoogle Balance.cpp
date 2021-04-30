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
     ll t=75,x;
     ll count1=0, count0=0, casef =1;
     while (t--)
     {
          cin>>x;
          if(x==0)
             break;
          else{
             int arr;
             for(int i=0;i<x; i++){
             cin>>arr;
            if(arr >0){
               count1++;
            }else if(arr==0)
            count0++;
          }

          }
          cout<<"Case "<<casef<<": "<<(count1-count0)<<endl;
          casef++;

          ll x=0 , y = 0;
          count1 = x;
          count0 = y;
     }
     
     return 0;
}