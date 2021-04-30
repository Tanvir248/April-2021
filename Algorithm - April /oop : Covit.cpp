#include <iostream>
using namespace std;
class covit{
    public:
    double affected;
    double revoer;
    double death;
};
void display(double af, double r, double d){
        cout<<"Total affected "<<af<<" And Total Death %:"<<(100*d)/af<<endl;
       cout<<"Total affected "<<af<<" And Total Recover %:"<<(100*r)/af<<endl;
}   
int main() {
    covit bd;
    bd.affected = 667;
    bd.revoer = 660;
    bd.death = 7;
    display(bd.affected, bd.revoer, bd.death);
	return 0;
}