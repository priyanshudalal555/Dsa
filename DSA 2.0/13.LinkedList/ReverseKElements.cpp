#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    } 
    return len;
}
Node* ReverseKElements(Node* &head, int k){
    if(head==NULL){
        cout<<"Linked List is empty."<<endl;
        return NULL;
    }
    int len=getLength(head);
    if(k>len){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=ReverseKElements(forward,k);
    }
    return prev;
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* forth=new Node(40);
    Node* fifth=new Node(50);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;
    
    print(head);
    cout<<endl;

    //ReverseKElements 
    head=ReverseKElements(head,2);
    print(head);
    cout<<endl;
    return 0;
}