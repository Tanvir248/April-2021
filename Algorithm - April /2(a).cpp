/*#include <iostream>
using namespace std;

class a{
    public:
   void ShowA(){
    cout<<"36 intake! Best of luck."<<endl;
    }
};
class C:public a{

};
class D:public C,  public a{

};
class E:public C, public D{

};
int main(){
 E ob;
 ob.ShowA();
 return 0;
}*/
//No this Code is not working Because Class E object can't detect here 
//Class A public function It just able to inherite function in this class
//Not in main function by object. No Now I Write Down here right code...
#include<iostream>
using namespace std; 
class A
{
public:
  A()  { 
      cout << "36 intake! Best of luck." << endl; 
      }
};
  
class C:public A 
{
public:
  C():A()  { }
};
  
class D: public C, public A  
{
public:
  D():A(){}
};
class E: public D{
  public:
  E() {}
  };
int main()
{
    E Ob;
    return 0;
}
// We can change showA() that because it can't able to dectect any void function
//By This type of inheritance process So that we change showA() Void function
//for print it.
//This showA() void function is not work because void function isn't detect
//by this multiple inheritance pricess so we use this function for call from 
//Class E objects...