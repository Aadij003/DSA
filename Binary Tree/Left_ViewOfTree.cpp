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
void Left_view(Node* root){
if(!root){
return;
}
queue<Node*> Q;
int n=0;
Q.push(root);
while(!Q.empty()){
cout<<Q.front()->data<<endl;
n=Q.size();
while(n--){
Node* temp=Q.front();
Q.pop();
if(temp->left){
Q.push(temp->left);
}
if(temp->right){
Q.push(temp->right);
}
}

}

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
cout<<"left view of tree is:";
Left_view(root);
}
    