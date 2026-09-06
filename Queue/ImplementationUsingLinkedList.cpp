#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Queue{
    Node* front,*rear;
    public:
    Queue(){
front=rear=NULL;
    }
    bool IsEmpty(){
        return front==NULL;
    }
    // push
    void push(int i){
        if(IsEmpty()){
        front=new Node(i);
        rear=front;
        return;
    }else{
        rear->next=new Node(i);
        rear=rear->next;
    }

    }
    //pop
    void pop(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return ;
        }else{
        Node* temp;
        temp=front;
        front=front->next;
        delete temp;
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return front->data;
        }
    }
};
int main(){
    Queue Q;
    Q.push(10);
      Q.push(20);
        Q.push(30);
          Q.push(40);
            Q.push(50);
              Q.push(60);
              Q.pop();
           int x=Q.start();
             
        if(!Q.IsEmpty()){
            cout<<x<<endl;
        }
        

}