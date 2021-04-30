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
 int i, j, n;
 int counti =0, countj =0;
cin>>i;
 while (i!=1 && j != 1)
 {
     
     if(i == 1){
        counti++;
       //  break;
     }else{
         if(i%2 ==0){
            counti++;
             i = i/2;
             cout<<i<<" ";
         }else{
             counti++;
             i = 3*i +1;
             cout<<i<<endl;
         }
     }
     if(j ==1){
         countj++;
    //     break;
     }else{
         if(j%2 ==0){
            countj++;
             j = j/2;
         }else{
             countj++;
             j = 3*j +1;
         }
     }
 }
 cout<<counti/2+1<<" ";
 //cout<<countj<<endl;
    return 0;
}
