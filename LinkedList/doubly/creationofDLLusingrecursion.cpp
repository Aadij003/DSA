#include<iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int value){
    prev=NULL;
    data=value;
    next=NULL;
    }
};
Node* creation(Node* H,Node*T,int x,int i){
  
    int p;
    if(i>x){
        return H;
    }else{
         cout<<"enter value of Node"<<" "<<i<<":";
        cin>>p;
        if(H==NULL){
            H=new Node(p);
            T=H;
        }else{
            T->next=new Node(p);
            T->next->prev=T;
            T=T->next;
        }
        i=i+1;
    } creation(H,T,x,i);
    return H;
}void display(Node* H){
    Node* t=H;
    cout<<"linklist is:"<<endl;
    while(t!=NULL){
        cout<<t->data<<endl;
        t=t->next;
    }
}
int main(){
    int c=1;
    int n;
    cout<<"enter no. of nodes:";
    cin>>n;
    Node* Head=NULL;
      Node* Temp=NULL;
  Head= creation(Head,Temp,n,c);
   display(Head);
}