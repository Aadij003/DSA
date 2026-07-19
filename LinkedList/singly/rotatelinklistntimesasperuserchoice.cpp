// to rotate the linklist n times as per user's choice
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
void Rotate_list(Node* &Headd,int a){
Node*temp;
Node*ttemp;
for(int i=0;i<a;i++){
temp=Headd->next;
ttemp=Headd;
while(temp->next!=NULL){
ttemp=temp;
temp=temp->next;
}
temp->next=Headd;
ttemp->next=NULL;
Headd=temp;
}
display(Headd);
}
int main(){
int n;
cout<<"enter the no. of nodes:";
cin>>n;
Node* head=creation(n);
display(head);
int r;
cout<<"enter how many times to rotate:";
cin>>r;
Rotate_list(head,r);
}