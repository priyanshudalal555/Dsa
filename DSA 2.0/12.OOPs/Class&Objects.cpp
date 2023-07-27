#include<iostream>
#include "Hero.cpp"
using namespace std;

// class Hero {
//     char name[100];
//     int health;
//     char level;
// };
int Hero::timeToComplete = 5;

int main(){

    //Static Allocation
    // Hero h1;
    // h1.health=70;
    // h1.level='A';
    // h1.setName('&');
    // cout<<"Name is : "<<h1.getName()<<endl;
    // cout<<"Health is : "<< h1.level<<endl;
    // cout<<"Level is : "<< h1.health<<endl;
    // return 0;

    //Dynamic Allocation
    // Hero * b =new Hero;
    // b->level='A';
    // cout<<"Level is : "<< (*b).level<<endl;

    //Copy constructor
    // Hero a;
    // a.level='B';
    // a.health=80;
    // Hero b(a);
    // a.print();
    // b.print();

    //Static
    // cout<<Hero::timeToComplete<<endl;

    //Static Function
    // cout<<Hero::random()<<endl;


    return 0;
}