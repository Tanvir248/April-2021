#include<iostream>
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
void solve(){
    ll t;
    while(cin >> t)
    {
        if(t == 0)
            break;

        ll n, m, x, y;
        cin >> n >> m;
        for(int i=1; i<=t; i++)
        {
            cin >> x >> y;

            if(x==n || y==m)
                cout << "divisa" << endl;
            else if(x<n && y>m)
                cout << "NO" << endl;
            else if(x>n && y>m)
                cout << "NE" << endl;
            else if(x>n && y<m)
                cout << "SE" << endl;
            else if(x<n && y<m)
                cout << "SO" << endl;
        }
    }
}
int main()
{
   solve();
    return 0;
}