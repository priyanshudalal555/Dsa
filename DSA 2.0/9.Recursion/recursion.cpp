#include<iostream>
using namespace std;

int fact(int n){
    //This is Base Condition and this is mandatory.
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int pow(int n, int p){
    if(p==0){
        return 1;
    }
    return n*pow(n, p-1);
}
void print(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    print(n-1);
}
void sayDigit(int n, string arr[]){
    if(n == 0) return ;
    int digit=n%10;
    n=n/10;
    sayDigit(n, arr);
    cout<<arr[digit]<<" ";
}
int arraySum(int *arr, int n){
    if(n==0) return 0;
    if(n==1) return arr[0];
    int remainingPart=arraySum(arr+1, n-1);
    int sum=arr[0]+ remainingPart;
    return sum;
}
int lsearch(int *arr, int n, int target){
    if(n==0) return -1;
    if(arr[0]==target) arr[0];
    else{
        lsearch(arr+1,n-1,target);    
    } 
}
int bsearch(int *arr, int s, int e, int target){
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]<target){
        return bsearch(arr, mid+1, e, target);
    }
    else{
        return bsearch(arr, s, mid-1, target);
    }
}
void rstring(string& s, int st, int e){
    if(st>e) return ;
    int temp=s[st];
    s[st]=s[e];
    s[e]=temp;
    st++;
    e--;
    rstring(s, st,e);
}
bool isPallindrom(string s, int st, int e){
    // if(st>e) return true;
    // if(s[st]!=s[e]) return false;
    // st++;
    // e--;
    // isPallindrom( s, st, e);
    if(st>e) return true;
    if(s[st]!=s[e]) return false;
    else return isPallindrom(s, st+1, e-1);
}
int power(int n, int p){
    if(p==0) return 1;
    if(p==1) return n;
    int ans=power(n, p/2);
    if(p%2==0) return ans*ans;
    else return n*ans*ans;
}
void bubbleSort(int *arr, int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    bubbleSort(arr,n-1);
}
int main(){
    //Factorial
    // int n=5;
    // int ftrl=fact(n);
    // cout<<ftrl;

    // Power
    // int n=3;
    // int p=3;
    // int ans=pow(n, p);
    // cout<<ans;

    //Print
    // int n=5;
    // print(n);

    //Say Digit
    // int n=99124;
    // string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    // sayDigit(n, arr);

    //ArraySum
    // int arr[5]={1,2,3,4,5};
    // int n=4;
    // int sum=arraySum(arr, n);
    // cout<<sum;

    //LinearSearch
    // int arr[5]={1,2,3,4,5};
    // int n=5;
    // int target=4;
    // int index=lsearch(arr, n, target);
    // cout<<index<<endl;

    //BinarySearch
    // int arr[5]={1,2,3,4,5};
    // int s=0;
    // int e=5;
    // int target=5;
    // int index=bsearch(arr, s, e, target);
    // cout<<index<<endl;

    //Reverse String
    // string s="abcde";
    // int st=0;
    // int n=4;
    // cout<<"Before : "<<s<<endl;
    // rstring(s, st, n);
    // cout<<"After : "<<s<<endl;

    //isPallindrom
    // string s="abbcddcbba";
    // int st=0;
    // int e=7;
    // bool ans=isPallindrom(s, st, e);
    // if(ans){
    //     cout<<"It is Pallindrom"<<endl;
    // }
    // else{
    //     cout<<"It is not a Pallindrom"<<endl;
    // }

    //Power
    // int n=2;
    // int p=3;
    // int ans=power(n,p);
    // cout<<"2 power 3 : "<<ans<<endl;

    //Bubble Sort
    int arr[5]={2,5,1,6,9};
    int n=5;
    cout<<"Before : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr, n);
    cout<<"After : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}