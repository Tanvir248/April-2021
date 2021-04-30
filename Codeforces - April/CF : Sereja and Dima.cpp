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
   v<ll> add;
   ll left =0;
   ll card_turn=0;
            lln n, num, sums =0, sumd=0;
            cin>>n;
           ll right = n-1;
           ll flow = n;

            for(int i=1; i<= n; i++){
              cin>>num;
              add.push_back(num);
            }
          while (flow!=0){
             if(card_turn%2 ==0){
                if(add[left]>add[right]){
                   sums+= add[left];
                   left++;
                }else{
                   sums+=add[right];
                right--;
                }
             }else{

                if(add[left]>add[right]){
                   sumd+= add[left];
                   left++;
                }else{
                   sumd+=add[right];
                   right--;
                }
             }
      flow--;
      card_turn++;
          }
          
          cout<<sums<<" "<<sumd<<endl;
}
int main(){
    
     solve();
 
     return 0;
}