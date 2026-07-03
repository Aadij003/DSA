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
    Node *head;
    head=new Node(1);   //first node
    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        Node *temp;
        temp=new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
   Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}
}