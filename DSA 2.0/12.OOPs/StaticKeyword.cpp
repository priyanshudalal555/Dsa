#include<iostream>
using namespace std;

class abc{
    public:
        static int x,y;
        void print() const {
            cout<<x<<" "<<y<<endl;
        }
};
int abc::x;
int abc::y;
int main(){
    abc obj1;
    obj1.x=2;
    obj1.y=4;
    abc obj2;
    obj2.x=12;
    obj2.y=14;
    obj1.print();
    obj2.print();
    return 0;
}