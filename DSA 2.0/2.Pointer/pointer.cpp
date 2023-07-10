#include<iostream>
using namespace std;

int main () {

    //Pointer Basic

    // int num=3;
    // cout<<num<<endl;
    // cout<<&num<<endl; //Adress of num

    // //Creating pointer
    // int *ptr=&num;
    // cout<<"Value at this location : "<<*ptr<<endl;
    // cout<<"Address stored at this pointer : "<<ptr<<endl;

    // double a =4.3;
    // double *p2 = &a;
    // cout<<"Value at this location : "<<*p2<<endl;
    // cout<<"Address stored at this pointer : "<<p2<<endl;
    // (*p2)++;
    // cout<<"num : "<<a<<endl;

    // //Copy Pointer
    // int *q=ptr;
    // cout<<"Value at this location : "<<*ptr<< "--"<<*q<<endl;
    // cout<<"Address stored at this pointer : "<<ptr<< "--"<<q<<endl;

    //Pointer in Array
    // int arr[10]={1,2,3,4,5,6,7,8,9};
    // cout<<"Address of array is : "<<arr<<endl;
    // cout<<"Address of arrays first element is : "<<&arr[0]<<endl;
    // cout<<"value of arrays first element is : "<<*arr<<endl;
    // cout<<"value of arrays first element is : "<<*arr-2005101193<<endl;
    // cout<<*(arr+1)<<endl;
    // int i=7;
    // cout<<i[arr]<<endl;
    // int temp[10];
    // cout<<"ArraySize "<<sizeof(temp)<<endl;
    // int *ptr=&temp[0];
    // cout<<"SizeOfPointerOfArray "<<sizeof(ptr)<<endl;
    // cout<<"SizeOfPointerOfArray "<<sizeof(*ptr)<<endl;
    // cout<<"SizeOfPointerOfArray "<<sizeof(&ptr)<<endl;
    // cout<<"SizeOfPointerOfArray "<<ptr<<endl;
    // cout<<"SizeOfPointerOfArray "<<*ptr<<endl;
    // cout<<"SizeOfPointerOfArray "<<&ptr<<endl;

    //Pointer in character array
    // char ch[5]= "abcd";
    // cout<<ch<<endl;
    // char *c=&ch[0];
    // cout<<c<<endl;

    //Double Pointer
    // int i=5;
    // int *ptr=&i;
    // int **ptr2=&ptr;
    // cout<<"Address of i"<<endl;
    // cout<<&i<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr2<<endl;

    // cout<<"Value of i"<<endl;
    // cout<<i<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;

    // cout<<"Value of i's pointer"<<endl;
    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;

    // int value=5;
    // int* ptr=&value;
    // int** ptr2=&ptr;

    // cout<<"Value : "<<value<<endl;    
    // cout<<"Value Address : "<<&value<<endl;
    // cout<<"Ptr : "<<ptr<<endl;    
    // cout<<"Ptr Value : "<<&ptr<<endl;    
    // cout<<"Ptr2 : "<<ptr2<<endl;    
    // cout<<"Ptr2 Value : "<<&ptr2<<endl;  
    // cout<<endl;  
    // cout<<endl;  
    // cout<<"Printing Value"<<endl;
    // cout<<value<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;
    // cout<<endl;
    // cout<<endl;
    // cout<<"Printing Address of Value"<<endl;
    // cout<<&value<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr2<<endl;
    // cout<<endl;
    // cout<<endl;
    // cout<<"Printing Address of Ptr"<<endl;
    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;

    //MCQ'S
    int first=8;
    int second=18;
    int *ptr=&second;
    *ptr=9;
    cout<<first<<" "<<second<<endl;
    cout<<"Answer is: 8 9";
    return 0;
}