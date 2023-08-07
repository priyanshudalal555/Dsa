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

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail, int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}
void insertAtTail(Node* &head,Node* &tail, int data){
    Node* newNode=new Node(data);
    if(tail==NULL){
        tail=newNode;
        head=newNode;
    }
    else{
        tail->next=newNode;
    }
    tail=newNode;
}
void insertAtPositon(int position, Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findLength(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    Node* newNode=new Node(data);
    newNode->next=curr;
    prev->next=newNode;
}
void deleteNode(int position, Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"Can't Delete Node is empty"<<endl;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    int len=findLength(head);
    if(position==len){
        int i=1;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        while(i<position-1){
            prev=prev-1;
        }
        prev->next=NULL;
        Node* temp=tail;
        tail=prev;
        delete temp;
    }
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
Node* reverse(Node* &prev, Node* &curr){
    if(curr==NULL){
        return prev;
    }
    Node* forward=curr->next;
    curr->next=prev;

    reverse(curr, forward);
}
int main(){
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);
    // Node* fifth=new Node(50);
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // print(first);

    //Insert AT Head
    // Node* head=NULL;
    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtHead(head, 40);
    // insertAtHead(head, 50);
    // print(head);

    //Insert AT Head
    Node* head=NULL;
    Node* tail=NULL;
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    print(head);
    cout<<endl;

    //InsertAtPosition
    insertAtPositon(2,head,tail,35);
    print(head);

    //Delete
    deleteNode(3,head,tail);
    cout<<endl;
    cout<<endl;
    print(head);
    // deleteNode(1,head,tail);

    Node* prev=NULL;
    Node* curr=head;
    head=reverse(prev, curr);
    cout<<endl;
    print(head);
    cout<<endl;
    return 0;
}