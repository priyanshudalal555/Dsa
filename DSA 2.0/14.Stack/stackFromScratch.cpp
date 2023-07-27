#include<iostream>
using namespace std;

class Stack {
    public:
    int *arr;
    int size;
    int top;

    Stack(int size) {
        arr = new int[size];
        this->size=size;
        top=-1;
    }

    void push(int data) {
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop() {
        if(top==-1){
            cout<<"Stack Underflow, can't Delete element."<<endl;
        }
        else{
            top--;
        }
    }
    int getTop(){
        if(top==-1){
            cout<<"No Element in Stack."<<endl;
        }
        else{
            return arr[top];
        }
    }
    int getSize(){
        return top+1;
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.getSize()<<endl;
    while(!s.empty()){
        cout<<s.getTop()<<endl;
        s.pop();
    }
    cout<<s.getSize()<<endl;
    return 0;
}