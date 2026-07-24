// creation of doubly linklist 
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node* prev;
Node(int value){
prev=NULL;
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
Temp->next=new Node(p);
Temp->next->prev=Temp;
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

int main(){
int n;
cout<<"enter the no. of nodes:";
cin>>n;
Node* head=creation(n);
display(head);


}