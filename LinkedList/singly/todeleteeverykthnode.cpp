// to delete every kth node
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
if(Head==NULL){
Head=new Node(p);
Temp=Head;
}else{
Temp->next = new Node(p);
Temp=Temp->next;
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
void delete_node(Node* H,int a){
Node* temp=H;
Node* ttemp=NULL;
if(a==1){
return;
}else{
while(temp!=NULL && temp->next!=NULL){
for(int i=0;i<a-1;i++){
if(temp!=NULL && temp->next!=NULL){
ttemp=temp;
temp=temp->next;
}}
ttemp->next=temp->next;
delete temp;
temp=ttemp->next;

}
display(H);
}}
int main(){
int n;
cout<<"enter the no. of nodes:";
cin>>n;
Node* head=creation(n);
display(head);
int k;
cout<<"enter value of k to delete every kth node:";
cin>>k;
delete_node(head,k);
}