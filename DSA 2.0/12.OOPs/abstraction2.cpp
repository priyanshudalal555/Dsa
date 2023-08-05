#include<iostream>
#include "abstraction.h"
using namespace std;

void birdDo(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}
int main(){
    Bird *bird=new eagle();
    birdDo(bird);
    return 0;
}