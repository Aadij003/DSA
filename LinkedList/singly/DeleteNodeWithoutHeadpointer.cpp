#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }};
    int main(){
        Node* Head=new Node(1);
        Node* temp=Head;
    for(int i=2;i<6;i++){
        temp->next=new Node(i);
        temp=temp->next;
    }
    //deleting node without using Head pointer
    // given a pointer n which is pointing to the node which is to be deleted
    Node* n;
    temp=Head;
    for(int i=1;i<=2;i++){
        temp=temp->next;

    }
    n=temp;
    Node* ttemp=n->next;
    n->data=ttemp->data;
    n->next=ttemp->next;
    delete ttemp;
    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<endl;;
        temp=temp->next;
    }
    }