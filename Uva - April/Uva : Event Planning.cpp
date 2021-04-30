#include <iostream>
#include<vector>
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
using namespace std;
#include <stdio.h>

 lln N, B, H, W;
lln p, a;
 
int main() {
    while(scanf("%lld %lld %lld %lld", &N, &B, &H, &W) == 4) {
        lln cost = 0;
        for(int i = 0; i < H; i++) {
            cin>>p;
            for(int j = 0; j < W; j++) {
                cin>>a;
                if(a >= N && N * p <= B)
                    if(cost == 0 || N * p < cost)
                        cost = N * p;
            }
        }
        if(cost ==0){
          cout<<"stay home"<<endl;
        }else{
          cout<<cost<<endl;
        }
    }
 return 0;}
