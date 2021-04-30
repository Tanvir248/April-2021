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
   v<string>add;
         string s, ans, ans1;
         cin>>s;
         //add.push_back(s);
         for (ull i = 0; i < s.size(); i++)
         {
            if(s[i]=='.' && s[i-1]=='9'){
			cout <<"GOTO Vasilisa." << endl;
			     return;
		       }
            
            if(s[i]=='.'){
               break;
            }
            ans.push_back(s[i]);
         }
        reverse(s.B, s.E);
        for (int i = 0; i <s.S ; i++)
        {
           if(s[i]=='.'){
               break;
            }
            ans1.push_back(s[i]);
        }

        reverse(ans1.B, ans1.E);
        
        string s1;
        s1.push_back(ans1[0]);
        if(stoi(s1)>=5){
            cout<<stoi(ans)+1;
         }else{
         for (int i = 0; i < ans.size(); i++)
         {
            cout<<ans[i];
         }
         }
         cout<<endl;
         
}
int main(){
        
     solve();
 
     return 0;
}
/* string s;
    cin >> s;

    size_t n = s.find('.');
    if (s[n-1] == '9')
    {
        cout << "GOTO Vasilisa." << endl;
    }
    else
    {
        if (s[n+1] >= '5')
        {
            s[n-1] += 1;
        }
        s.erase(s.begin() + n, s.end());
        cout << s << endl;
    }*/