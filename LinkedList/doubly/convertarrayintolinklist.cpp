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
void display(Node* H){
    Node* T=H;
    cout<<"DLL is:"<<endl;
    while(T!=NULL){
        cout<<T->data<<endl;
T=T->next;
    }
}

Node* arraytoDLL(int x){
int arr[x];
    cout<<"enter"<<" "<<x<<" "<<"elements: "<<endl;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"elements of array are: "<<endl;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<endl;
    }
        Node* Head=NULL;
    Node* Temp=NULL;
    for(int i=0;i<x;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Temp=Head;
        }
        else{
            Temp->next=new Node(arr[i]);
            Temp->next->prev=Temp;
            Temp=Temp->next;
        }
    }
    return Head;

}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
  Node* h=  arraytoDLL(n);
  display(h);
}