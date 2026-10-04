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
bool Parent(Node* root,int a,int b){
if(!root){
return 0;
}
if(root->left && root->right){
if(root->left->data==a && root->right->data==b){
return 1;
}
if(root->left->data==b && root->right->data==a){
return 1;
}
}
return Parent(root->left,a,b)|| Parent(root->right,a,b);

}
bool Cousin(Node* root,int a,int b){
queue<Node*> Q;
Q.push(root);
int level=0;
int l1=-1,l2=-1;
while(!Q.empty()){
int n=Q.size();
while(n--){
Node* temp=Q.front();
Q.pop();
if(temp->data==a){
l1=level;
}
if(temp->data==b){
l2=level;
}
if(temp->left){
Q.push(temp->left);
}
if(temp->right){
Q.push(temp->right);
}
}
level++;
if(l1!=l2){
return 0;
}
if(l1!=-1){
break;
}
}
return !Parent(root,a,b);

}
int main(){
int n;
cout<<"Enter root node of tree: ";
cin>>n;
if(n==-1){
return 0;
}
Node* root=new Node(n);
Creation(root);
int a,b;
cout<<"enter two nodes";
cin>>a>>b;
int x=Cousin(root,a,b);
if(x==1){
cout<<"Cousin";
}
else{
cout<<"not cousin";
}
}
    