#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void interleavingQueue(queue<int> &q){
    int n=q.size();
    if(q.empty()){
            return;
    }
    int k=n/2;
    int count=0;
    queue<int> q2;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;
        if(count==k){
            break;
        }
    }
    while(!q.empty() && !q2.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);

        int second=q.front();
        q.pop();
        q.push(second);
    }
    if(n&1){
        int element=q.front();
        q.pop();
        q.push(element);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);

    //InterLeaving Queue
    interleavingQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}