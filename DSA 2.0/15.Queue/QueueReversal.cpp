#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//Using Stack
void queueReverse(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }
}
//Using Recursion
void queueReverse2(queue<int> &q){
    if(q.size()==0){
        return;
    }
    int element=q.front();
    q.pop();
    queueReverse2(q);
    q.push(element);
}
//Reverse K Elements
void reverseKElements(queue<int> &q, int k){
    int count=0;
    int n=q.size();
    if(k<=0 || k>n){
        return;
    }
    stack<int> s;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;
        if(count==k){
            break;
        }
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    count=0;
    while (!q.empty() && n-k!=0)
    {
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k){
            break;
        }
    }
    
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // queueReverse(q);
    // queueReverse2(q);
    reverseKElements(q, 2);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}