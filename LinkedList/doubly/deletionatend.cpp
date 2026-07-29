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
void display(Node* H){
    Node* T=H;
    cout<<"linklist is:"<<endl;
    while(T!=NULL){
        cout<<T->data<<endl;
        T=T->next;
    }
}
void delete_end(Node** HH){
    if((*HH)->next==NULL){
delete *HH;
*HH=NULL;
cout<<"no nodes left after deletion";
    }else{
    Node*TEMP=*HH;
   Node*TTEMP=(*HH)->next;
   while(TTEMP->next!=NULL){
    TEMP=TTEMP;
    TTEMP=TTEMP->next;
   }
   delete TTEMP;
   TEMP->next=NULL;
   cout<<"after deletion"<<" ";
   display(*HH);
    }
}
int main(){
    Node* head;
    int n;
    cout<<"enter the no. of nodes: ";
    cin>>n;
    head=creation(n);
    delete_end(&head);

}