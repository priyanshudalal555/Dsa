#include<iostream>
using namespace std;

class Hero {
    private:
    char name;
    public:
    int health;
    char level;
    static int timeToComplete;
    static int random() {
        return timeToComplete;
    }
    void setName(char n){
        name=n;
    }
    char getName(){
        return name;
    }
    void print(){
        cout<<"Health : "<<this->health<<endl;
        cout<<"Level : "<<this->level<<endl;
    }
    Hero() {
        cout<<"Constructor is Called"<<endl;
    }
};