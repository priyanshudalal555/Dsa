#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(5);
    dq.push_front(15);
    dq.push_back(1);
    dq.push_back(2);
    cout<<"Size is : "<<dq.size()<<endl;
    dq.pop_back();
    cout<<"Size is : "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"Size is : "<<dq.size()<<endl;
    cout<<"Front is : "<<dq.front()<<endl;
    cout<<"Rear is : "<<dq.back()<<endl;
    return 0;
}