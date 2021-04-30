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
            lln n1, n2, n3, n4;
            cin>>n1>>n2>>n3>>n4;
               int x = max(max(n1,n2), n3);
     //cout<<x<<"             ";
               int y = x- n1;
               int z = x - n2;
               int t = x - n3;
               int s = y+z+t;
              // cout<<s<<endl;
              
               if(n4 >= s) {
                    n4 -= s;
            if(n4 % 3 == 0)
               Y
            else
              N
        }
        else N

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