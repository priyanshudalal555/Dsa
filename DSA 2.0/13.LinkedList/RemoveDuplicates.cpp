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
void removeDuplicates(Node* &head){
    if(head==NULL){
        cout<<"Linked List is Empty !"<<endl;
        return;
    }
    if(head->next=NULL){
        cout<<"Single Node in Linked List"<<endl;
        return;
    }
    Node* curr=head;
    while(curr != NULL){
        if((curr->next != NULL) && (curr->data == curr->next->data) ){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(10);
    Node* third=new Node(20);
    Node* forth=new Node(30);
    Node* fifth=new Node(30);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;

    cout<<"Before Duplication Removal :"<<endl;
    print(head);
    removeDuplicates(head);
    cout<<endl;
    cout<<"After Duplication Removal :"<<endl;
    print(head);

    return 0;
}