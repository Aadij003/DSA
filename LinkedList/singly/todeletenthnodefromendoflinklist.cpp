// to delete nth node from end node of linklist
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
cout<<"enter the data of"<<" "<<x<<" "<<"Nodes:"<<endl;
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
void delete_node(Node* &headd,int a,int b){
int p=a-b;
Node* successor=headd;
Node* prev=NULL;
if(b==a){
headd=successor->next;
delete successor;
}else{
for(int i=0;i<p;i++){
prev=successor;
successor=successor->next;
}
prev->next=successor->next;
delete successor;
}
display(headd);
}
int main(){
int n;
cout<<"enter the no. of nodes:";
cin>>n;
Node* head=creation(n);
display(head);
int x;
cout<<"enter nth node to delete from last:";
cin>>x;
delete_node(head,n,x);
}