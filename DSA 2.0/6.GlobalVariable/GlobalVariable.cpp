#include<iostream>
using namespace std;
int score=15;
void a(){
    cout<<score<<endl;
}
int main(){
    //Local variable
    // int i=5;
    // {int i=2; cout<<i<<endl;}
    // cout<<i<<endl;
    // return 0;

    //Global Variable
    a();
    cout<<++score<<endl;
}