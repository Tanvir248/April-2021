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
int sep2(int n){
    int x, y ,ans =0;
    while(n!=0){
         x = n%10;
       ans += x;
        y= n/10;  
        n = y;
    }
    return ans;
}
int sep_again(int n){
  vector<int>add;
    int x, y ,ans =0;
    while(n!=0){
         x = n%10;
       ans += x;
        y= n/10;  
        n = y;
    }if(ans >9)
       { cout<<sep2(ans)<<endl;
       }
    else{
      return ans;
      }
}
void s_n(lln n){
    vector<int>add;
    int x, y;
    while(n!=0){
         x = n%10;
        add.push_back(x);
        y= n/10;  
        n = y;
    }
    int sum =0;
    for (int i = 0; i < add.size(); i++)
    {
       // cout<<add[i]<<" ";
        sum += add[i];
    }
    if(sum>9){
        cout<<sep_again(sum)<<endl;
    }else {
        cout<<sum<<endl;
    }
}
int main() {
    lln n;
    
    while(cin>>n){
        if(n==0)
        break;
        else
    s_n(n);}
    	return 0;
}
/*#include <stdio.h>

int main()
{
    int t;
    long long int n;

  while(scanf("%lld",&n)==1){
      if(n==0)
      break;

        t=0;
        while(1){

                while(n!=0){
                        t=t+(n%10);
                        n=n/10;
                }
                if(t/10==0)
                break;
                else{
                    n=t;
                    t=0;
                }
        }

        printf("%d\n",t);
  }

    return 0;
}*/