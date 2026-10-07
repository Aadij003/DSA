#include<iostream>
#include<queue>
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
void Diagonal(Node* root,queue<Node*>&Q){
if(root==NULL && !Q.empty()){
root=Q.front();
Q.pop();
}
if(root!=NULL){
if(root->left){
Q.push(root->left);
}
cout<<root->data<<" ";
Diagonal(root->right,Q);
}
}
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
int main(){
int n;
cout<<"Enter root node value:";
cin>>n;
if(n==-1){
return 0;
}
queue<Node*>Q;
Node* root=new Node(n);
Creation(root);
cout<<"Diagonal traversal is:";
Diagonal(root,Q);
}