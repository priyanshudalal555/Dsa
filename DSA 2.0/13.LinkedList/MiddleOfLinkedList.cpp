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
Node* getMiddle(Node* &head){
    if(head==NULL){
        cout<<"Linked List is empty."<<endl;
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head->next;
    if(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow->next;
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

    //Middle Node 
    cout<<"Middle Element is : "<<getMiddle(head)->data<<endl;
    cout<<endl;
    return 0;
}