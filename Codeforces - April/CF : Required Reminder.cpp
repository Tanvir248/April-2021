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
     lln n, num1, num2, num3;
     cin>>n;
     for (int i = 0; i < n; i++)
     {
          cin>>num1>>num2>>num3;
          if(num3 -num3% num1+num2<= num3 ){
               cout<<num3 -num3% num1+num2<<endl;
          }else
          cout<<num3-num3%num1-(num1-num2)<<endl;
     }
            
}
int main(){
       
     solve();
    return 0;
}
/*#include<bits/stdc++.h>
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
          lln n;
          cin>>n;
          lln num1, num2, num3;
          for(int i =1; i<=n;i++){
               cin>>num1>>num2>>num3;
               if(num1>num3){
                    cout<<0<<endl;
               }else{
          for(lln j = num3; j>=1; j--){
               if(j%num1 == num2){
                    cout<<j<<endl;
                    break;
               }
          }
          }
          }
          
}
int main(){
     
          
     solve();
    
     return 0;
}*/