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
int solve(int num1, int num2){ 
        ll flag =0, a, b;
        for (int i = 0; i < num1; i++)
        {
            cin>>a>>b;
            if(a== num2 || a == 7-num2 ||b== num2 || b == 7- num2){
            flag = 1;
            break;
            }
        }
        return flag;
}
int main(){
     ll n1, n2;
     cin>>n1>>n2; 
    if( solve(n1, n2) == 1){
         N
    }else
    Y
  
     return 0;
}