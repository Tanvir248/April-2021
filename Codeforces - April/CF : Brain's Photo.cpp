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
    lln n1, n2, flag =0;
    cin>>n1>>n2;
    string s;
    for(lln i=0; i<(n1*n2);i++){
         cin>>s;
         if(s=="C"|| s=="M" || s== "Y"){
          flag =1;
          }
    }
     if(flag){
          cout<<"#Color"<<endl;
     }else{
          cout<<"#Black&White"<<endl;
     }
}
int main(){
   
     solve();
   
     return 0;
}