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
bool loopDetection(Node* &head){
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;
}
Node* startingPoint(Node* &head){
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }
    while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
    }
    return slow;
}
void loopRemoval(Node* &head){
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    Node* slow=head;
    Node* fast=head;
    Node* pre=slow;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            pre=slow;
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            if(slow==head){
                pre->next=NULL;
                return;
            }
            slow=head;
            break;
        }
    }
    Node* prev=fast;
    while(slow!=fast){
            prev=fast;
            slow=slow->next;
            fast=fast->next;
    }
    prev->next=NULL;
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* forth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seventh=new Node(70);
    Node* eight=new Node(80);
    Node* ninth=new Node(90);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;
    eight->next=ninth;
    ninth->next=head;

    //Loop Detection
    cout<<"Is loop in linkedList : "<<loopDetection(head)<<endl;
    cout<<endl;

    //Loop Detection
    cout<<"Loop Starting Point in linkedList is : "<<startingPoint(head)->data<<endl;
    cout<<endl;

    //Loop Removal
    cout<<"Loop is Removed."<<endl;
    loopRemoval(head);
    print(head);
    return 0;
}