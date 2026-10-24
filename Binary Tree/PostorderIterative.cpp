#include<iostream>
#include<vector>
#include<stack>
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
void Postorder(Node* root){
if(root==NULL){
return;
}
stack<Node*>S;
vector<int>V;
Node* top=root;
while(top || !S.empty()){
while(top){
V.push_back(top->data);
if(top->left){
S.push(top->left);
}
top=top->right;
}
if(!S.empty()){
top=S.top();
S.pop();
}
}
cout<<"Postorder traversal is:\n";
for(int i=V.size()-1;i>=0;i--){
cout<<V[i]<<" ";

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
Postorder(root);
}