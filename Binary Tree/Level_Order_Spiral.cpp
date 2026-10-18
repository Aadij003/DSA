#include<iostream>
#include<stack>
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
vector<int> Level_Order_Spiral(Node* root){
stack<Node*>S1;
stack<Node*>S2;
S1.push(root);
vector<int> ans;
while(!S1.empty()||!S2.empty()){
if(!S1.empty()){
while(!S1.empty()){
Node* temp=S1.top();
S1.pop();
ans.push_back(temp->data);
if(temp->right){
S2.push(temp->right);
}
if(temp->left){
S2.push(temp->left);
}
}
}else{
while(!S2.empty()){
Node* temp=S2.top();
S2.pop();
ans.push_back(temp->data);
if(temp->left){
S1.push(temp->left);
}
if(temp->right){
S1.push(temp->right);
}
}
}
}
return ans;
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
vector<int> result = Level_Order_Spiral(root);

for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
}
    