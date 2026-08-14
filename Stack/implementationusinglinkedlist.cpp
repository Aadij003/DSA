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
class Stack{
    public:
Node* top;
int size;
Stack(){
    top=NULL;
    size=0;
}
void push(int d){
    Node* temp=NULL;
   
        temp=new Node(d);
        temp->next=top;
        top=temp;
        size=size+1;
    }

void pop(){
    if(top==NULL){
        cout<<"stack underflow";
    }else{
    Node* temp=top;
    top=top->next;
    delete temp;
    size=size-1;
}
}
void peek(){
    if(top==NULL){
        cout<<"stack is empty";
    }else{
        cout<<"peek element is="<<" "<<top->data<<endl;
    }
    
}
bool isEmpty(){
    return top==NULL;
}
void isSize(){
    cout<<"size of stack is="<<" "<<size<<endl;
}
};
int main(){
    Stack s1;
    s1.push(10);
     s1.push(20);
      s1.push(30);
       s1.push(40);
       s1.pop();
         s1.pop();
           s1.pop();
           s1.pop();
            //    s1.pop(); // stack underflow
               s1.push(70);
               s1.push(80);
               s1.peek();
               s1.isEmpty();
             s1.isSize();

    // cout<<s1.top->data;

}