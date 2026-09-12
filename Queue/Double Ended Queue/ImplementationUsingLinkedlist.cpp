/* DQUEUE = It means double ended queue. In normal queue we perform operatins like push,pop.
When we call push function it pushes the data from rear or back and similarly for pop function,
 it pops data from front. But in Dqueue we can perform both push and pop operations from front or rear. */
#include<iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    public:
    Node(int value){
        prev=NULL;
        next=NULL;
        data=value;
    }
};
class Dqueue{
Node* front;
Node* rear;
public:
Dqueue(){
    front=NULL;
    rear=NULL;

}
// Push_front
void Push_front(int i){
if(front==NULL){
    front=new Node(i);
    rear=front;
    return;
}else{
    Node* temp=new Node(i);
    temp->next=front;
    front->prev=temp;
    front=temp;
    return;
}
}
// Push_back
void Push_back(int i){
    if(front==NULL){
        front=rear=new Node(i);
        return;
    }
    else{
        Node* temp=new Node(i);
        rear->next=temp;
        temp->prev=rear;
        rear=temp;
        return;
    }
}
// Pop_front
void Pop_front(){
    if(front==NULL){
        cout<<"Dqueue is empty";
        return;
    }else{
        Node* temp;
        temp=front;
        front=front->next;
        delete temp;
        if(front==NULL){
            rear=NULL;
            return;
        }else{
               front->prev=NULL;
        }
    }
}
//pop_back
void Pop_back(){
if(front==NULL){
    cout<<"Dqueue is empty";
    return;
}else{
    Node* temp=rear;
    rear=rear->prev;
    delete temp;
    if(rear==NULL){
        front=NULL;
        return;
    }else{
        rear->next=NULL;
    }
}
}
//start= returns starting node value
int start(){
    if(front==NULL){
        cout<<"Dqueue is empty";
        return -1;
    }else{
        return front->data;
    }
}
// end= returns last node data
int end(){
    if(front==NULL){
        cout<<"Dqueue is empty";
        return -1;
    }else{
        return rear->data;
    }
}
};
int main(){
Dqueue DQ;
DQ.Push_front(10);
DQ.Push_front(20);
DQ.Pop_front();
DQ.Pop_front();
DQ.Pop_front();
DQ.Push_back(30);
DQ.Pop_back();
DQ.Pop_back();



}