#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }

};
int main(){
    Node *Head;
    Head=new Node(1);
    Node *temp=Head;
    for(int i=2;i<=5;i++){
        temp->next=new Node(i);
        temp=temp->next;
    }
    //add a node at last
    temp=Head;
    Node *ttemp;
    ttemp=new Node(6);

       while(temp->next!=NULL){
        temp=temp->next;
       }
       temp->next=ttemp;
temp=ttemp;
       temp=Head;
       while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
       }
 
}