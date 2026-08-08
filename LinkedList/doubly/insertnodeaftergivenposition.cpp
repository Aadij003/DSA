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
Node* creation(int x){
    Node* h=NULL;
    Node* t=NULL;
    int p;
    cout<<"enter data of"<<" "<<x<<" "<<"nodes:"<<endl;
    for(int i=1;i<=x;i++){
        cin>>p;
        if(h==NULL){
            h=new Node(p);
            t=h;
        }else{
            t->next=new Node(p);
            t->next->prev=t;
            t=t->next;
        }
    }
    return h;
}
void display(Node* HH){
    Node* T=HH;
    cout<<"linklist is:"<<endl;
    while(T!=NULL){
        cout<<T->data<<endl;
        T=T->next;
    }
}
void insert(Node**H,int x){
    int i=0;
    int pos;
    int d;
    Node* Header;
    Node* temp=*H;
    Node* ttemp;
    cout<<"enter data of node to be inserted:";
    cin>>d;
    ttemp=new Node(d);
    cout<<"enter pos:";
    cin>>pos;
    if(pos==0){
ttemp->next=*H;
(*H)->prev=ttemp;
*H=ttemp;
    }else if(pos==x){
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ttemp;
        ttemp->prev=temp;
    }else{
        while(i<pos-1){
            temp=temp->next;
            i=i+1;
        }
        Header=temp->next;
        temp->next=ttemp;
        ttemp->prev=temp;
        ttemp->next=Header;
        Header->prev=ttemp;
    }
    cout<<"after insertion ";
display(*H);
}
int main(){
      Node* head;
    int n;
    cout<<"enter the no. of nodes: ";
    cin>>n;
    head=creation(n);
    cout<<"initially"<<endl;
    display(head);
    insert(&head,n);
}