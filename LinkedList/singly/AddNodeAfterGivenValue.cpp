#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next=NULL;
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
   for(int i=2;i<=5;i++){
    temp->next=new Node(i);
    temp=temp->next;
   }
   temp=Head;
   cout<<"previous linklist was:";
   while(temp){
    cout<<temp->data<<endl;
    temp=temp->next;
   }
   Node* temp2;
   temp2=new Node(30);
   int n;
 cout<<"enter the value of n:"<<endl;
 cin>>n;
 temp=Head;
 while(n>1){
temp=temp->next;
n--;
 }
 temp2->next=temp->next;
 temp->next=temp2;
 temp=Head;
 while(temp){
    cout<<temp->data<<endl;
    temp=temp->next;
 }
 
}