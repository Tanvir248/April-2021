#include<bits/stdc++.h>
using namespace std;
// Base class
class tea {
  public:
    void ShowItem() {
    cout << "Green Tea & Black Tea \n" ;
  }
};

// Derived class
class Grean_tea : public tea {
  public:
    void ShowItem() {
    cout << "Sells Green Tea \n" ;
  }
};

// Derived class
class Black_tea : public tea {
  public:
    void ShowItem() {
    cout << "Sells Black Tea \n" ;
  }
};
int main(){
   tea *ob;
   Grean_tea obg;
   Black_tea obb;
   //Define tea object for Green_tea and Black_tea object
    ob = &obg;
    ob = &obb;
    ob->ShowItem();
    obg.ShowItem();
    obb.ShowItem();

        return 0;
}