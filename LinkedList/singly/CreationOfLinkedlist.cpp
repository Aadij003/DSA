#include<iostream>
using namespace std;
class Node{
    public:
    int data;
   Node *next;
    Node(int value){
        data= value;
        next=NULL;

    }};
    int main(){
Node *head;
head=new Node(10);
Node *temp=head;
for(int i=11;i<15;i++){
    temp->next=new Node(i);
    temp=temp->next;
}
temp=head;
while(temp!=NULL){
    cout<<temp->data<<endl;;
    temp=temp->next;
}
    }