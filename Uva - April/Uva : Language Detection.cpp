
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
     ls s;
     ll count =1;
     while (getline(cin,s))
     {  
          if(s =="#")
          break;
          else{
             
              if(s=="HELLO"){
                cout<<"Case "<<count<<": ENGLISH"<<endl;
            }
            else if(s=="HOLA"){
                cout<<"Case "<<count<<": SPANISH"<<endl;
            }else if(s=="HALLO"){
                   cout<<"Case "<<count<<": GERMAN"<<endl; 
            }else if(s=="BONJOUR"){
                  cout<<"Case "<<count<<": FRENCH"<<endl; 
            }else if(s =="CIAO"){
                   cout<<"Case "<<count<<": ITALIAN"<<endl; 
            }else if(s=="ZDRAVSTVUJTE"){
               cout<<"Case "<<count<<": RUSSIAN"<<endl; 
            }else{
                  cout<<"Case "<<count<<": UNKNOWN"<<endl; 
            }
          }
         
    count++;
     }
     return 0;
}