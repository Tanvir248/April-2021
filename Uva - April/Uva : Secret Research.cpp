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

     ll t;
     
    cin >> t;
    
    while (t--)
    {
        string s;
        cin >> s;
        
        
        if (s == "1" || s == "4" || s == "78")
            cout << "+";
        
        else if (*(s.end() - 2) == '3' && *(s.end() - 1) == '5')
            cout << '-';
        else if (s[0] == '9' && *(s.end() - 1) == '4')
            cout << '*';
        else
            cout << '?';
        
        cout << '\n';
    }
          
     
     return 0;
}