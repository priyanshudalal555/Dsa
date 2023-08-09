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
Node* reverse(Node* &head){
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
Node* SumOfLL(Node* &head1, Node* &head2){
    head1=reverse(head1);
    head2=reverse(head2);

    Node* ansHead=NULL;
    Node* ansTail=NULL;
    int carry=0;

    while(head1!=NULL && head2!=NULL){
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        int sum=carry+head1->data+head2->data;
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        if(ansHead==NULL){
            ansHead=newNode;
            ansTail=newNode;
        }
        else{
            ansTail->next=newNode;
            ansTail=newNode;
        }
        head1=head1->next;
        head2=head2->next;
    }
    while(head1!=NULL){
        int sum=carry+head1->data; 
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head1=head1->next;
    }
        while(head2!=NULL){
        int sum=carry+head2->data; 
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head2=head2->next;
    }
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
    }
    ansHead=reverse(ansHead);
    return ansHead;
}
int main(){
    Node* head1=new Node(2);
    Node* second=new Node(4);
    head1->next=second;
    second->next=NULL;

    Node* head2=new Node(2);
    Node* Second=new Node(4);
    Node* Third=new Node(8);
    head2->next=Second;
    Second->next=Third;
    Third->next=NULL;

    cout<<"Linked List are :"<<endl;
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    cout<<"Sum of Linked List is :"<<endl;
    print(SumOfLL(head1, head2));

    return 0;
}