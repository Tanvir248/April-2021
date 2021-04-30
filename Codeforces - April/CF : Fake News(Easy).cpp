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
       string s, ans;
       cin>>s;
       ll flag = 0;
      for(int i=0;i<s.S;i++)
    {
        if(s[i]=='h'&& flag==0)
        {
            flag++;
        }
        else if(s[i]=='e'&& flag==1)
        {
            flag++;
        }
        else if(s[i]=='i'&& flag==2)
        {
            flag++;
        }
        else if(s[i]=='d'&& flag==3)
        {
            flag++;
        }
        else if(s[i]=='i'&& flag==4)
        {
            flag++;
        }
        if(flag==5)
        {
            Y
            return;
        }
    }
    N
}
int main(){
      
     solve();
   
     return 0;
}/* 
       for (int i = 0; i < s.S; i++)
       { 
          if(s[i]=='h' &&s[i+1] == 'i' && s[i+2]=='e' && s[i+3]=='d'&& s[i+4]=='i' || (s[0]=='h'&& s[1]== 'h')){
             flag = 1;
          }

       }
       
       if(flag){
          N
       }else
       {
          Y
       }       
*/