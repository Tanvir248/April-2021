#include <iostream>
using namespace std;

class tree {
   private:
    int a;
    int b;

   public:
    // Overload operator ++ 
    void operator ++ () {
        a= 205;
        b =210;
    }

    void display() {
        if(a>b){
            cout<<a<<". a is bigger Then b."<<endl;
        }else  
          cout<<b<<". b is bigger Then a."<<endl;
        
    }
};

int main() {
    tree show; //Object 
    ++show;
    show.display();
    return 0;
}