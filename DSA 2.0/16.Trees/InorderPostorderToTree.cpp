#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int findPosition(int arr[], int n, int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
        return -1;
    }
}

Node* buildTreeFromInorderPostorder(int inorder[], int postorder[], int size, int &postIndex, int inorderStart, int inorderEnd){
    if(postIndex<0 || inorderStart>inorderEnd){
        return NULL;
    } 
    int element=postorder[postIndex];
    postIndex--;
    Node* root= new Node(element); 
    int pos=findPosition(inorder, size, element);

    root->right=buildTreeFromInorderPostorder(inorder, postorder, size, postIndex, pos+1, inorderEnd);

    root->left=buildTreeFromInorderPostorder(inorder, postorder,size, postIndex, inorderStart, pos-1);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    int inorder[]={40,20,10,50,30,60};
    int postorder[]={40,20,50,60,30,10};
    int size=6;
    int postIndex=size-1;
    int inorderStart=0;
    int inorderEnd=size-1;
    Node* root=buildTreeFromInorderPostorder(inorder, postorder, size, postIndex, inorderStart, inorderEnd);
    levelOrderTraversal(root);
    return 0;
}