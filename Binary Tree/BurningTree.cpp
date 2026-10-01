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
int Height_below(Node*root){
if(!root){
return 0;
}
return 1+max(Height_below(root->left),Height_below(root->right));
}
int BurningTree(Node*root,int target,int &timer,int &height,bool &found){
if(!root){
return 0;
}
if(root->data==target){
found=true;
 height=Height_below(root)-1;
return -1;
}
int left=BurningTree(root->left,target,timer,height,found);
int right=BurningTree(root->right,target,timer,height,found);
if(left<0){
timer=max(timer,abs(left)+right);
return left-1;
}
if(right<0){
timer=max(timer,abs(right)+left);
return right-1;
}
return 1+max(left,right);
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
int target;
cout<<"enter target value:";
cin>>target;
int timer=0;

int height=0;
bool found=false;
BurningTree(root,target,timer,height,found);
if(!found){
cout<<"target not found";
return -1;
}
cout<<"time required to burn the whole tree from "<<target<<" is:"<<max(height,timer);
}