#include<iostream>

using namespace std;
//Global Variable
int x=2;

int main(){
    //We can access global variable
    // x=20; 
    // cout<<x<<endl;

    //Local Variable is Preferred
    // int x=99;
    // x=100;
    // ::x=55;
    // cout<<x<<endl;
    // cout<<::x<<endl;

    //Most Local Variable is preferred
    int x=4;
    {
        int x=6;
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    return 0;
}