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
for(int i=start;i>=end;i--){
if(in[i]==target){
return i;
}
}
return -1;
}
Node* tree_construct(int* post,int* in,int start,int end,int index){
if(end>start){
return NULL;
}
Node*root= new Node(post[index]);
 int pos= Find_position(post[index],start,end,in);
 root->left= tree_construct(post,in,pos-1,end,index-(start-pos)-1);
root->right= tree_construct(post,in,start,pos,index-1);
return root;
}
int main(){
int post[]={4,6,7,5,2,10,9,8,3,1};
int in[]={4,2,6,5,7,1,10,8,9,3};
int start=9;
int end=0;
int index=9;
Node* root=tree_construct(post,in,start,end,index);
}