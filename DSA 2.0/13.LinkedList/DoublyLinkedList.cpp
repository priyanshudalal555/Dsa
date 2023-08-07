#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void print(Node* &head){
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
void insertAtHead(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* nextNode=new Node(data);
        head==nextNode;
        tail=nextNode;
        return;
    }
    Node* nextNode=new Node(data);
    nextNode->next=head;
    head->prev=nextNode;
    head=nextNode;
}
void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* nextNode=new Node(data);
        head==nextNode;
        tail=nextNode;
        return;
    }
    Node* nextNode=new Node(data);
    nextNode->prev=tail;
    tail->next=nextNode;
    tail=nextNode;
    nextNode->next=NULL;
}
void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(head==NULL){
        Node* nextNode=new Node(data);
        head==nextNode;
        tail=nextNode;
        return;
    }
    if(position==1){
        insertAtHead(head, tail, data);
        return;
    }
    int len=getLength(head);
    if(position>len){
        insertAtTail(head, tail, data);
        return;
    }
    int i=1;
    Node* prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;
    }
    Node* curr=prevNode->next;
    Node* newNode=new Node(data);
    prevNode->next=newNode;
    newNode->prev=prevNode;
    curr->prev=newNode;
    newNode->next=curr;
}
void deleteAtPosition(Node* head, Node* tail, int position){
    if(head==NULL){
        cout<<"Can't Delete Because Linked List is Empty!"<<endl;
        return;
    }
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=getLength(head);
    if(position>len){
        cout<<"Please Enter a valid length."<<endl;
    }
    if(len==position){
        Node* lastNode=tail;
        tail=tail->prev;
        lastNode->prev=NULL;
        tail->next=NULL;
        delete lastNode;
        return;
    }
    int i=1;
    Node* left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;
    left->next=right;
    right->prev=left;
    curr->prev=NULL;
    curr->next=NULL;
    delete curr;
}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* head=first;
    Node* tail=third;
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=NULL;
    print(first);
    cout<<endl;

    //InsertAt Head
    insertAtHead(head, tail,5);
    print(head);
    cout<<endl;

    //Insert At Tail
    insertAtTail(head, tail,35);
    print(head);
    cout<<endl;

    //Insert At Positon
    insertAtPosition(head, tail,25,4);
    insertAtPosition(head, tail,0,1);
    insertAtPosition(head, tail,40,8);
    print(head);
    cout<<endl;

    //Delete At Positon
    // deleteAtPosition(head, tail,8);
    // deleteAtPosition(head, tail,4);
    deleteAtPosition(head, tail,1);
    print(head);
    cout<<endl;

    return 0;
}