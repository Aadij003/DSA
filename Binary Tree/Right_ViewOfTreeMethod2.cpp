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
void Right_view(Node* root,vector<int>&V,int level){
if(root==NULL){
return;
}
if(level==V.size()){
V.push_back(root->data);
}
Right_view(root->right,V,level+1);
Right_view(root->left,V,level+1);

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
cout<<"right view of tree is:";
vector<int> V;
int level=0;
Right_view(root,V,level);
for(int i=0;i<V.size();i++){
    cout<<V[i]<<" ";
}
}
    