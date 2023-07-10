#include<iostream>
using namespace std;

int main(){
    int i=5;
    //Create Reference Variable
    int& j=i;
    cout<<"Before Change:"<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    i=10;
    cout<<"After i Change:"<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    j=15;
    cout<<"After j Change:"<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
}