#include<iostream>
#include<queue>
using namespace std;

int main(){
    //Queue Creation
    queue<int> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     //Queue Size
     cout<<"Size : "<<q.size()<<endl;
    //Queue Pop
     q.pop();
     //Queue Top
     cout<<"Size : "<<q.size()<<endl;
    //Queue Empty
    if(q.empty()){
        cout<<"Q is Empty."<<endl;
    }
    else{
        cout<<"Q is not Empty."<<endl;
    }
    //Queue Front
    cout<<"Front : "<<q.front()<<endl;
    return 0;
}