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
  
        
    vector<ls> vs(4);
    for (size_t i = 0; i < 4; ++i)
    {
        cin >> vs[i];
    }

    bool pass = false;
    for (size_t top = 0; top <= 2 && !pass; ++top)
    {
        for (size_t left = 0; left <= 2; ++left)
        {
            int dot = 0;
            for (size_t r = 0; r < 2; ++r)
            {
                for (size_t c = 0; c < 2; ++c)
                {
                    if (vs[top+r][left+c] == '.')
                    {
                        dot += 1;
                    }
                }
            }
            if (dot != 2)
            {
                pass = true;
                break;
            }
        }
    }
    
    if(pass) Y
    else
    N
    return;    
}
int main(){
     
          
     solve();
    
     return 0;
}