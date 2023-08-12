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

Node* buildTree(){
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);
    cout<<"Enter data for left part of : "<<data<<" Node"<<endl;
    root->left=buildTree();
        cout<<"Enter data for right part of : "<<data<<" Node"<<endl;
    root->right=buildTree();
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
void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int ans=max(leftHeight, rightHeight)+1;
    return ans;
}
int main(){
    Node* root=NULL;
    root=buildTree();
    // preOrderTraversal(root);
    // inOrderTraversal(root);
    // levelOrderTraversal(root);
    // postOrderTraversal(root);
    cout<<"Height of a tree is : "<<height(root)<<endl;
    return 0;
}