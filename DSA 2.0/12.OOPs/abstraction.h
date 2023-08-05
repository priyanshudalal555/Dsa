#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
class Bird{
    public:
        virtual void eat()=0;
        virtual void fly()=0;
};
class sparrow: public Bird{
    private:
    void eat(){
        std::cout<<"Sparrow can eat\n";
    }
    void fly(){
        std::cout<<"Sparrow can fly\n";
    }
};
class pigeon: public Bird{
    private:
    void eat(){
        std::cout<<"pigeon can eat\n";
    }
    void fly(){
        std::cout<<"pigeon can fly\n";
    }
};
class eagle: public Bird{
    private:
    void eat(){
        std::cout<<"eagle can eat\n";
    }
    void fly(){
        std::cout<<"eagle can fly\n";
    }
};

#endif