#include<iostream>
using namespace std;

class Nstack {
    int *a, *top, *next;
    int n;
    int size;
    int freeSpot;
    public:
    Nstack(int _n, int _s):n(_n), size(_s){
        freeSpot=0;
        a=new int[size];
        top=new int[n];
        next=new int[size];
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[size-1]=-1;
    }
    bool push(int x, int m){
        if(freeSpot=-1){
            return false;
        }
        int index=freeSpot;
        freeSpot=next[index];
        a[index]=x;
        next[index]=top[m-1];
        top[m-1]=index;
        return true;
    }

    int pop(int m){
        if(top[m-1]==-1){
            return -1;
        }
        int index=top[m-1];
        top[m-1]=next[index];
        int poped=a[index];
        next[index]=freeSpot;
        freeSpot=index;
        return poped;
    }
    ~Nstack(){
        delete[] a;
        delete[] top;
        delete[] next;
    }
};
int main(){
    Nstack s(3, 6);
    cout<<s.push(10,1)<<endl;
    cout<<s.push(20,1)<<endl;
    cout<<s.push(30,1)<<endl;
    cout<<s.push(40,1)<<endl;
    cout<<s.push(50,1)<<endl;
    cout<<s.pop(1)<<endl;

    return 0;
}