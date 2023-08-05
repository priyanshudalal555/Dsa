#include<iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y):x(_x),y(new int(_y)){}

    void print() const{
        cout<<x<<endl;
        cout<<*y<<endl;
        cout<<y<<endl;
        cout<<endl;
    }

    //Shallow Copy
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=obj.y;
    // }

    //Deep Copy
    abc(const abc &obj){
        x=obj.x;
        y=new int(*obj.y);
    }

    ~abc(){
        delete y;
    }
};

int main(){
    // abc a1(1,2);
    // a1.print();
    // abc b=a1;
    // b.print();
    // *b.y=20;
    // b.print();
    // a1.print();

    abc *a=new abc(1,2);
    abc b=*a;
    delete a;
    b.print();
    return 0;
}