#include<iostream>
using namespace std;
class Node{
public:
Node* left;
Node*right;
int data;
Node(int value){
data=value;
left=NULL;
right=NULL;
}
};
int Find_position(int target,int start,int end,int* in){
for(int i=start;i<=end;i++){
if(in[i]==target){
return i;
}
}
return -1;
}
Node* tree_construct(int* pre,int* in,int start,int end,int index){
if(start>end){
return NULL;
}
Node*root= new Node(pre[index]);
 int pos= Find_position(pre[index],start,end,in);
 root->left= tree_construct(pre,in,start,pos-1,index+1);
root->right= tree_construct(pre,in,pos+1,end,index+(pos-start)+1);
return root;
}
int main(){
int pre[]={1,2,4,5,8,9,3,6,7,10};
int in[]={4,2,8,5,9,1,6,3,7,10};
int end=9;
int start=0;
int index=0;
Node* root=tree_construct(pre,in,start,end,index);
}