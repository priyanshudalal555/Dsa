#include<iostream>
using namespace std;

class abc{
    mutable int x;
    int *y;
    int z;

    public:
    int getX() const{
        //x=99; //COnst funcyion can't change the data members   //But we can use mutable to done this job   
        return x;
    }

    //Old way to write constructor
    // abc(int z=0){
    // }

    //New way to write constructor = initialization list
    abc(int _x, int _y, int _z=0):x(_x),y(new  int(_y)), z(_z){

    }
    int getZ() {
        return z;
    }
    int getY() {
        return *y;
    }
};

int main(){
    // const int x=5;
    // cout<<x<<endl;
    // x=10; //can't modify

    //Classic And obsolute Method
    // int *p=&x;
    // *p=5;
    // cout<<x;

    //const pointer, but non-const data
    // int *const a = new  int(2);
    // cout<<*a<<endl;
    // *a=20;
    // cout<<*a<<endl;
    // int b=90; //It will not run because const pointer
    // a=&b;

    //Const pointer, const data
    // const int *const a =new int(10);
    // cout<<*a<<endl;
    // *a=50; //Both pointer and data is constant
    // int b=9;
    // a=&b;

    // const function
    abc j(1,2);
    cout<<j.getX()<<endl;
    cout<<j.getY()<<endl;
    cout<<j.getZ()<<endl;
    return 0;
}