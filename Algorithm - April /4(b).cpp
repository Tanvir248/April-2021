//Ans 4(b)
#include<iostream>
using namespace std;
  
class Base{
public:
  void print()  {
     cout << "In Base Class." << endl;
   }
};
  
class Derived1: public Base{
public:
  void print()  {
     cout << "In Derived1 Class." << endl; 
  }
};
  
class Derived2: public Base{
public:
  void ptint()  { 
    cout << "In Derived1 Class." << endl; 
  }
};
  
int main()
{
  //Print every classes data..
  Base ob = Base();
   ob.print();
    Derived1 ob1 = Derived1();
    ob1.print();
    Derived2 ob2 = Derived2();
    ob2.print();
    return 0;
}