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
Node* Creation(){
int n;
cout<<"enter value of root node: ";
cin>>n;
if(n==-1){
return NULL;
}
Node* root=new Node(n);
queue<Node*>Q;
Q.push(root);
while(!Q.empty()){
Node* front=Q.front();
cout<<"enter left data of "<<front->data<<":";
int x;
cin>>x;
if(x!=-1){
front->left=new Node(x);
Q.push(front->left);
}
else{
cout<<"left of "<<front->data<<" is -1"<<endl;
}
cout<<"enter right data of "<<front->data<<":";
int y;
cin>>y;
if(y!=-1){
front->right=new Node(y);
Q.push(front->right);
}
else{
cout<<"right of "<<front->data<<" is -1"<<endl;
}
Q.pop();
}
return root;
}
int main(){

Node* root=Creation();
}