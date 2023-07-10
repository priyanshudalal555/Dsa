#include <iostream>
#include <array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){

    //Array
    // int basic[3]={1,2,3};
    // array<int,4> a = {1,2,3,4};
    // int size = a.size();

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    // cout<<a.at(2)<<endl;
    // cout<<a.empty()<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;

    //Vector
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // cout<<v.capacity()<<endl;
    // v.pop_back();
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.size()<<endl;
    // v.clear();
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // vector<int> a(5,1);
    // for (int i:a)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // vector<int> last(a);
    // for (int i:last)
    // {
    //     cout<<last[i]<<" ";
    // }
    
    //Deque
    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // d.pop_front();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<d.at(0)<<endl;
    // cout<<d.empty()<<endl;
    // d.erase(d.begin(), d.begin()+1);
    // cout<<d.size()<<endl;

    //List
    // list<int> l;
    // l.push_back(1);
    // l.push_front(9);
    // for(int i:l){
    //     cout<<i<<" ";
    // }

    //Stack
    // stack<string> s;
    // s.push("Raj");
    // s.push("Rajul");
    // s.push("Prithvi");
    // s.push("Himanshu");
    // s.push("Abhishek");
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;

    //Queue
    // queue<string> q;
    // q.push("Dalal");
    // q.push("Kumar");
    // q.push("Dalal");
    // q.push("Sharma");
    // q.pop();
    // cout<<q.front()<<endl;

    //Priority Queue
    // priority_queue<int> pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);
    // pq.push(4);
    // int n = pq.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    //Set
    // set<int> s;
    // s.insert(5);
    // s.insert(4);
    // s.insert(4);
    // s.insert(1);
    // s.insert(1);
    // for (auto i : s)
    // {
    //     cout<<i<<endl;
    // }
    // cout<<s.count(8)<<endl;
    // set<int>::iterator it = s.find(0);
    // cout<<*it<<endl;

    //Map
    // map<int,string> m;
    // m[1] = "a";
    // m[2] = "b";
    // m[3] = "c";
    // m[4] = "d";

    // for(auto i:m) {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    //Algorithm
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(-3);
    // v.push_back(40);
    // v.push_back(15);
    // cout<<binary_search(v.begin(),v.end(),40)<<endl;
    // cout<<max(33,54)<<endl;
    // cout<<min(33,4)<<endl;

}