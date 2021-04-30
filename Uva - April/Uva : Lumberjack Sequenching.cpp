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
int main() {

          vector<ll>input1;
          vector<ll>input2;
          vector<ll>sorted;
          ll t;
          cin>>t;
          cout<<"Lumberjacks:"<<endl;
          while(t--){
               int num;
               for(ll i=0; i<10; i++){
                    cin>>num;
                    input1.push_back(num);
                    input2.push_back(num);
                    sorted.push_back(num);
               }
               sort(input1.begin(), input1.end());
                sort(input2.begin(), input2.end(), greater<ll>());
                
               if(sorted == input1 || sorted == input2){
                    cout<<"Ordered"<<endl;
               }
               else{
                    cout<<"Unordered"<<endl;
               }
               sorted.clear();
               input2.clear();
               input1.clear();
          }

	return 0;
}