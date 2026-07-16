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
int main(){
    Node* Head;
    Head=new Node(1);
    Node* temp;
temp=Head;
Node* ttemp;
for(int i=2;i<6;i++){
    temp->next=new Node(i);
    temp=temp->next;
}
cout<<"original linkedlist is:"<<endl;
temp=Head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}
temp=Head;
while(temp->next!=NULL){
    ttemp=temp;
    temp=temp->next;
}
ttemp->next=NULL;
delete temp;
cout<<"updated linklist is:"<<endl;
temp=Head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}

}