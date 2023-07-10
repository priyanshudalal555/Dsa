#include<iostream>
using namespace std;
int main(){
    // //Creating Array Using Dynamic Memory
    // int* arr=new int[2];
    // arr[0]=1;
    // arr[1]=2;
    // //delete []arr; //to delete dynamic memory 
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";

    //2D array using dynamic memory
    int n=2;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;
    cout<<(arr[0][0]);
    cout<<(arr[0][1]);
    cout<<(arr[1][0]);
    cout<<(arr[1][1]);
    //Releasing Memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete arr[];
    return 0;
}