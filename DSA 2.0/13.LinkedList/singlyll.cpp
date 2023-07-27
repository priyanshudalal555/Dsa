#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this-> data=data;
        this-> next=NULL;
    }
    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void InsertAtHead(Node* &head, int d) {
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail, int d) {
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head) {
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position==1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){
        InsertAtTail(tail, d);
        return;
    }

    Node* NodeToInsert = new Node(d);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
}
void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<=position){
            prev=curr;
            curr=curr->next;
        }
    }
}
int main(){
    Node* node1=new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    //Insert At Head
    Node* head=node1;
    // print(head);
    // InsertAtHead(head, 12);
    // InsertAtHead(head, 14);
    // InsertAtHead(head, 17);
    // print(head);

    //Insert At Tail  
    Node* tail=node1;
    print(tail);
    InsertAtTail(tail, 12);
    InsertAtTail(tail, 14);
    InsertAtTail(tail, 17);
    print(head);

    //Insert At Position
    InsertAtPosition(tail, head, 4, 16);
    InsertAtPosition(tail, head, 1, 8);
    print(head);

    return 0;
}