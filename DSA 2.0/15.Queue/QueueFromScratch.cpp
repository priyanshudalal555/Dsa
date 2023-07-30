#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }
    void push(int data){
        if(rear==size){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop() {
        if(front==rear){
            cout<<"Q is empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int getFront(){
        if(front==rear){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
        int getRear(){
        if(front==rear){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        else{
            return arr[rear-1];
        }
    }
    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    int getSize(){
        return rear-front;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"Size of Queue is : "<<q.getSize()<<endl;
    cout<<"Front of Queue is : "<<q.getFront()<<endl;
    cout<<"Rear of Queue is : "<<q.getRear()<<endl;
    q.pop();
    cout<<"After Pop : "<<endl;
    cout<<"Size of Queue is : "<<q.getSize()<<endl;
    cout<<"Rear of Queue is : "<<q.getRear()<<endl;
    cout<<"Is Queue Empty : "<<q.isEmpty()<<endl;
    return 0;
}