#include<iostream>
#include<stack>
using namespace std;
void insetSorted(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    insetSorted(s, target);
    s.push(temp);
}
void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    sortStack(s);
    insetSorted(s, temp);
}
int main(){
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(10);
    s.push(7);
    s.push(9);
    sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}