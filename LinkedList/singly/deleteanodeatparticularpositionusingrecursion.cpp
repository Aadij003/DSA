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
void recur(int p,int q,Node* &r,Node* &s){  // p=any integer , q=n , r=temp , s=ttemp
   if(p!=q-1){
    s=r;
   r=r->next;
    recur(p+1,q,r,s);
   }else 
   return;
 }

int main(){
    Node* Head;
    Head=new Node(1);
    Node* temp;
    temp=Head;
    Node* ttemp;
    int n;
    for(int i=2;i<6;i++){
        temp->next=new Node(i);
        temp=temp->next;
    }
    temp=Head;
       while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
  temp=Head;
cout<<"enter the position of node to delete:"<<endl;
cin>>n;
if(n==1){
    Node* del=Head;
    Head=Head->next;
    delete del;
}else{
    recur(0, n,temp,ttemp);
    ttemp->next=temp->next;
    delete temp;
    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
}