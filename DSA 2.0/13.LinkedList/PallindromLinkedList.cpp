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
Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPallindrom(Node* &head){
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
        return false;
    }
    if(head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast != NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    Node* reverseLL=reverse(slow->next);
    slow->next=reverseLL;

    Node* temp1=head;
    Node* temp2=reverseLL;
    while(temp2!=NULL){
        if(temp1->data != temp2->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* forth=new Node(40);
    Node* fifth=new Node(40);
    Node* sixth=new Node(30);
    Node* seventh=new Node(20);
    Node* eight=new Node(10);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;
    eight->next=NULL;

    cout<<"Is Linked List Pallindrom : "<<isPallindrom(head)<<endl;
}