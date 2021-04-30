
#include<iostream>
using namespace std;
  
class Football{
public:
  Football(int a, string s)  { 
    cout<<a<<" "<<s<<endl;
    cout <<"In Football Class"<< endl; }
};
  
class Baseball{
public:
  Baseball(int a, string s)  {
    cout<<a<<" "<<s<<endl;
     cout << "In BaseBall Class" << endl; }
};
  
class Badminton: public Baseball, public Football{
  public:
  Badminton(int a,string s):Baseball(a,s), Football(a,s){
    cout<<a<<" "<<s<<endl;
      cout << "In Badminton Class" << endl;
  }
};
  
int main()
{
Badminton ob(3, "Sports");
    
    return 0;
}