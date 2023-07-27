#include<iostream>
using namespace std;

// class poly {
//     public:
//     void sayHello() {
//         cout<<"Hello Priyanshu!"<<endl;
//     }

//     void sayHello(string name) {
//         cout<<"Hello "<<name<<endl;
//     }
// };

// class a {
//     public:
//     int a;
//     int b;

//     public:
//     void operator+ (a &obj) {
//         int value1=this->b;
//         int value2=obj.b;
//         cout<<"Output : "<<value1*value2<<endl;
//         cout<<"Operation overloading successfull "<<endl;
//     }
// };

class animal {
    public:
    void speak(){
        cout<<"I can Speak."<<endl;
    }
};
class dog: public animal {
    public:
    void speak(){
        cout<<"I can Bark."<<endl;
    }
};
int main(){
    // poly obj1;
    // obj1.sayHello();
    // obj1.sayHello("Robin Hood ");

    //OPERATOR overiding 
    // a obj1, obj2;
    // obj1.b=4;
    // obj1.b=7;
    // obj1+obj2;
    // return 0;

    //Method Overriding
    dog d;
    d.speak();
}