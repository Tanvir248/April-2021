#include<iostream>
using namespace std;
class shape{
    double length;
    double width;
    public:
    void set_data(double num1, double num2){
        num1 = length;
        num2 = width;
    }
    //Virtual void function...
    virtual void display_area(int a, int b){
        a = length;
        b = width;
        cout<<"Print Rectangle and Triangle Area"<<endl;
    }
};
 //Derived Class Triangle
class triangle : public shape{
    public:
    void display_area(int a, int b){
        cout<<"area is : "<<0.5*a*b<<endl;
        
    }
};//Derived Class Rectangle
class rectangle : public shape{
    void display_area(double a, double b){
        cout<<"area is : "<<a*b<<endl;
    }
};
int main(){
 triangle obt;
 rectangle obr;
 shape *ob;
 ob = &obt;
 //ob =&obr;
 ob->display_area(5, 7);
  return 0;
}