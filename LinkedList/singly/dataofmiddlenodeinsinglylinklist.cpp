#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int value){
data=value;
next=NULL;
}
};
Node* creation(int x){
Node* Head=NULL;
Node* Temp=NULL;
int p;
cout<<"enter the data of"<<" "<<x<<" "<<"Nodes"<<endl;
for(int i=0;i<x;i++){
cin>>p;
Node* newNode=new Node(p);
if(Head==NULL){
Head=newNode;
Temp=newNode;
}else{
Temp->next = newNode;
Temp=newNode;
}}
return Head;
}
void display(Node* h){
Node* t=h;
cout<<"linklist is:"<<endl;
while(t!=NULL){
cout<<t->data<<endl;
t=t->next;
}
}
void Middle_Node(Node* H,int N){
Node* ttemp=H;
for(int i=0;i<N/2;i++){
ttemp=ttemp->next;
}
cout<<"the middle node data is:"<<endl;
cout<<ttemp->data;
return;
}
int main(){
int n;
cout<<"enter the no. of nodes:";
cin>>n;
Node* head=creation(n);
display(head);
Middle_Node(head,n);
}