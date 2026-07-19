// to check if linklist is palindrome or not 
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
void Palindrome(Node*H,int a){
if(a%2!=0){
Node* ttemp=H;
while(a>a/2){
Node* temp=H;
for(int i=1;i<=a-1;i++){
temp=temp->next;
}
if(ttemp->data!=temp->data){
cout<<"Not Palindrome";
return;
}else if(ttemp==temp){
break;
}
else{
ttemp=ttemp->next;
}

a--;
}
}else if(a%2==0){
Node*ttemp=H;
while(a>a/2){
Node* temp=H;
for(int i=1;i<=a-1;i++){
temp=temp->next;
}
if(ttemp->data!=temp->data){
cout<<"not palindrome";
return;
}else if(ttemp->next=temp){

break;
}else{
ttemp=ttemp->next;
}

a--;
}
}
cout<<"Palindrome";

}
int main(){
int n;
cout<<"enter the no. of nodes:";
cin>>n;
Node* head=creation(n);
display(head);
Palindrome(head,n);

}