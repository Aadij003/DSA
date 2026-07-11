#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next=NULL;
    Node(int value){
        data=value;
    }
};
void print(Node* z){
    Node* i;
    i=z;
    while(i!=NULL){
        cout<<i->data<<endl;
        i=i->next;
    }

}
void Delete_firstnode(Node* &c){       // we passed & which symbolises passing by reference that means the changes will be made to thet original value that has been passed
   Node* temp;
   temp=c;
   c=c->next;
   delete temp;
}

int main(){
    Node* Head;
    Head=new Node(10);
    Node* temp;
    temp=Head;
    for(int i=2;i<6;i++){
        temp->next=new Node(i*10);
        temp=temp->next;
    }
    temp=Head;
Delete_firstnode(Head);
print(Head);
}