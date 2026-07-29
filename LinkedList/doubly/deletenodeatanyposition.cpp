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
    cout<<"linklist after deletion is:"<<endl;
    while(T!=NULL){
        cout<<T->data<<endl;
        T=T->next;
    }
}
void delete_any_position(Node** HH,int y){
    Node* Temp=*HH;
    Node* TTemp=Temp->next;
    int i=1;
    int pos;
    cout<<"enter position of node to be deleted:";
    cin>>pos;
    if(pos<1 || pos>y){
        cout<<"invalid position";
        return;
    }
    else if(pos==1){
        *HH=Temp->next;
        delete Temp;
        (*HH)->prev=NULL;
    }else if(pos==y){
        while(TTemp->next!=NULL){
            Temp=TTemp;
            TTemp=TTemp->next;
        }
        delete TTemp;
        Temp->next=NULL;
    }else{
        while(i<pos-1){
            Temp=TTemp;
            TTemp=TTemp->next;
            i=i+1;
        }
        Temp->next=TTemp->next;
        TTemp->next->prev=Temp;
        delete TTemp;
    }
  
display(*HH);
}
int main(){
    Node* head;
    int n;
    cout<<"enter the no. of nodes: ";
    cin>>n;
    head=creation(n);
    delete_any_position(&head,n);

}