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
void sortLLWithDataReplacement(Node* &head){
    int zero=0;
    int one=0;
    int two=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0) zero++;
        else if(temp->data==1) one++;
        else if(temp->data==2) two++;
        temp=temp->next;
    }
    temp=head;
    while(zero--){
        temp->data=0;
        temp=temp->next;
    }
    while(one--){
        temp->data=1;
        temp=temp->next;
    }
    while(two--){
        temp->data=2;
        temp=temp->next;
    }
}
Node* sortLLWithOutDataReplacement(Node* &head){
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node* zeroHead = new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail=twoHead;

    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            
            zeroTail->next=temp;
            zeroTail=temp;
        }
        else if(curr->data==1){
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            
            oneTail->next=temp;
            oneTail=temp;
        }
        else if(curr->data==2){
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            
            twoTail->next=temp;
            twoTail=temp;
        }
    }
    Node* temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;

    if(oneHead!=NULL){
        zeroTail->next=oneHead;
        if(twoHead!=NULL){
            oneTail->next=twoHead;
        }
    }
    else{
        if(twoHead!=NULL){
            zeroTail->next=twoHead;
        }
    }

    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;

    return zeroHead;
}
int main(){
    Node* head=new Node(2);
    Node* second=new Node(2);
    Node* third=new Node(2);
    Node* forth=new Node(2);
    Node* fifth=new Node(2);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;

    cout<<"Before Sorting :"<<endl;
    print(head);
    // sortLLWithDataReplacement(head);
    // print(head);
    cout<<endl;
    cout<<"After Sorting :"<<endl;
    print(sortLLWithOutDataReplacement(head));

    return 0;
}