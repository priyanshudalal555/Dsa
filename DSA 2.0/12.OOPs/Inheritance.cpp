#include<iostream>
using namespace std;

// class Human {
//   public:
//   int height;  
//   int weight;  
//   int age;

//   public:
//   int getAge() {
//     return this->age;
//   }  
//   int setweight(int w) {
//     this->weight=w;
//   }
// };

// class Male: public Human {
//     public:
//     string color;

//     void sleep() {
//         cout<<"Male is Sleeping "<<endl;
//     }
// };

// class Male: protected Human {
//     public:
//     string color;

//     void sleep() {
//         cout<<"Male is Sleeping "<<endl;
//     }
//     int getHeight() {
//         return this->age;
//     }
// };

// class Male: private Human {
//     public:
//     string color;

//     void sleep() {
//         cout<<"Male is Sleeping "<<endl;
//     }
//     int getHeight() {
//         return this->age;
//     }
// };

// class Animal {
//     public: 
//     int age;
//     int weight;

//     public:
//     void walk() {
//         cout<<"Animal can walk!"<<endl;
//     }
// };

// class Dog: public Animal {

// };

// class a {
//     public:
//     int series;
//     int words;

//     public:
//     void aword() {
//         cout<<" a for Apple"<<endl;
//     }
// };
// class b: public a {

// };
// class c: public b {

// };

// class speak {
//     public:
//     void s(){
//         cout<<"I can Speak Sanskrit"<<endl;
//     }
// };

// class read {
//     public:
//     void r(){
//         cout<<"I can Read Sanskrit"<<endl;
//     }
// };

// class skill: public speak, public read {

// };

// class x {
//     public:
//     int series;
//     int words;

//     public:
//     void func1() {
//         cout<<"Inside Function 1"<<endl;
//     }
// };
// class y: public x {
//     public:
//     void func2() {
//         cout<<"Inside Function 2"<<endl;
//     }
// };
// class z: public x {
//     public:
//     void func3() {
//         cout<<"Inside Function 3"<<endl;
//     }
// };

// class p {
//     public:
//     void func1() {
//         cout<<"Inside Function 1"<<endl;
//     }
// };
// class q: public p {
//     public:
//     void func2() {
//         cout<<"Inside Function 2"<<endl;
//     }
// };
// class r {
//     public:
//     void func3() {
//         cout<<"Inside Function 3"<<endl;
//     }
// };
// class s: public q, public r {
//     public:
//     void func4() {
//         cout<<"Inside Function 4"<<endl;
//     }
// };

class d {
    public:
    void func() {
        cout<<"Valid Function"<<endl;
    }
};
class e {
    public:
    void func() {
        cout<<"Invalid Function"<<endl;
    }
};
class f: public d, public e {
    
};
int main(){
    //Public Mode
    // Male obj1;
    // obj1.sleep();
    // obj1.setweight(62);
    // cout<<obj1.weight<<endl;

    //Protected Mode
    // Male obj2;
    // cout<<obj2.getHeight()<<endl;
    // return 0;

    //Private Mode
    // Male obj2;
    // cout<<obj2.getHeight()<<endl;
    // return 0;

    //Types of Inheritance
    //1.Single Inheritance
    // Dog d;
    // d.walk();

    //2. Multi Level Inheritance
    // c cat;
    // cat.aword();

    //3. Multiple Inheritance
    // skill obj3;
    // obj3.r();
    // obj3.s();

    //4.Hierarchial Inheritance
    // x obj1;
    // obj1.func1();
    // y obj2;
    // obj2.func1();
    // obj2.func2();
    // z obj3;
    // obj3.func1();
    // obj3.func3();

    //5.Hybrid Inheritance
    // p obj1;
    // obj1.func1();
    // q obj2;
    // obj2.func1();
    // obj2.func2();
    // r obj3;
    // obj3.func3();
    // s obj4;
    // obj4.func1();
    // obj4.func3();
    // obj4.func4();

    //Inheritance Ambiguity
    f obj;
    //This will Arise error
    // obj.func();
    obj.d::func();
    obj.e::func();
}