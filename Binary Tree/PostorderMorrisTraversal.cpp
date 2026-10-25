#include<iostream>
#include<vector>
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
vector<int> Postorder(Node* root,vector<int>&V){
while(root){
if(!root->right){
V.push_back(root->data);
root=root->left;
}
else{
Node* current=root->right;
while(current->left && current->left!=root){
current=current->left;
}
if(current->left==NULL){
V.push_back(root->data);
current->left=root;
root=root->right;
}
else{

current->left=NULL;
root=root->left;
}

}

}
return V;
}
int main(){
vector<int>V;
int n;
cout<<"Enter root node value:";
cin>>n;
if(n==-1){
return 0;
}
Node* root=new Node(n);
Creation(root);
cout<<"Postorder Morris Traversal: ";
Postorder(root,V);
for(int i=V.size()-1;i>=0;i--){
cout<<V[i]<<" ";
}
}