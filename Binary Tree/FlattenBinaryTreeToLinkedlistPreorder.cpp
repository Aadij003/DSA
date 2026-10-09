#include<iostream>
using namespace std;
class Node{
public: 
int data;
Node* left;
Node* right;
Node(int value){
data=value;
left=right=NULL;
}
};

void Creation(Node* temp){
int x;
cout<<"enter data of left node of "<<temp->data<<":";
cin>>x;
if(x!=-1){
temp->left=new Node(x);
Creation(temp->left);
}
else{
cout<<"No node exists in left of "<<temp->data<<endl;
}
int y;
cout<<"enter data of right node of "<<temp->data<<":";
cin>>y;
if(y!=-1){
temp->right=new Node(y);
Creation(temp->right);
}
else{
cout<<"No node exists in right of "<<temp->data<<endl;
}
}
void display(Node* root){
while(root){
cout<<root->data<<" ";
root=root->right;
}
}
void Flatten_Tree(Node*&root){
Node* current=root;
while(current){
if(!current->left){
current=current->right;
}
else{
Node* temp=current->left;
while(temp->right){
temp=temp->right;
}
temp->right=current->right;
current->right=current->left;
current->left=NULL;
current=current->right;
}



}

int main(){
int n;
cout<<"Enter root node value:";
cin>>n;
if(n==-1){
return 0;
}
Node* root=new Node(n);
Creation(root);
cout<<"Flatened Binary tree is: ";
Flatten_Tree(root);
display(root);
}