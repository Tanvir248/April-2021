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
 #define inf 100000000000
#define SIZE 100
int n,k;
int q_pow(int a,int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans *= a;
        }
        b >>= 1;
        a *= a;
    }
    return ans;
}
 int check(int v){
    int i = 0;
    int sum = 0;
    while(v/q_pow(k,i)){
        sum += (v/q_pow(k,i));
        i++;
        if(sum >= n)return 1;
    }
    return 0;
}
int main(){
    scanf("%d%d",&n,&k);
    int l = 1,r = n;
         while(l <= r){
        int mid = (l+r)/2;
        if(check(mid)){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    printf("%d\n",l);
 return 0;
}