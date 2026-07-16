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
    int n;
    Node* Head;
    Head=new Node(1);
    Node*ttemp;
    Node* temp;
    temp=Head;
    for(int i=2;i<6;i++){
     temp->next=new Node(i);
     temp=temp->next;
    }
    cout<<"initially linked list is:"<<endl;
    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    temp=Head;
    cout<<"enter the position of node to delete:";
    cin>>n;
    while(n>1){
      ttemp=temp;
temp=temp->next;
n--;
    }
    ttemp->next=temp->next;
    delete temp;
    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}