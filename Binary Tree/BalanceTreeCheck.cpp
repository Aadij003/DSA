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
int Balance(Node* root,int &check){
if(root==NULL){
return 0;
}
if(root->left==NULL && root->right==NULL){
return 1;
}
int Left_Height=Balance(root->left,check);
if(check==-1){
return check;
}
int Right_Height=Balance(root->right,check);
if(abs(Left_Height-Right_Height)<=1){
return 1+max(Left_Height,Right_Height);
}else{
check=-1;
return check;
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
int check=0;
int final=Balance(root,check);
if(final!=-1){
cout<<"balanced";
}
else{
cout<<"not balanced";
}

}
    