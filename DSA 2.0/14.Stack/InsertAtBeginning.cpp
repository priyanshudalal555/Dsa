#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s, target);
    s.push(temp);
}

void InsertAtBeginning(stack<int> &s){
    if(s.empty()){
        cout<<"Stack is Empty."<<endl;
        return;
    }
    int target=s.top();
    s.pop();
    solve(s, target);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // InsertAtBeginning(s);
    solve(s, 5);
    solve(s, 0);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}