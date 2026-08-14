#include<iostream>
using namespace std;
class Stack{
 
int *arr;
int size;
int top;
public:
Stack(int s){
    arr=new int[s];
    top=-1;
    size=s;
    
}
 void push(int value){
    if(top==size-1){
        cout<<"stack overflow";
    }else{
    top=top+1;
    arr[top]=value;
    cout<<"pushed"<<" "<<value<<" "<<"into the stack"<<endl;
 }
}
 void pop(){
    if(top==-1){
        cout<<"stack underflow";
    }else{
        cout<<"popped"<<" "<<arr[top]<<" "<<"from the stack"<<endl;
        top=top-1;
    }
 }
 void peek(){
    if(top==-1){
        cout<<"stack is empty";
    }else{
    cout<<"peek element of the stack is"<<" "<<arr[top]<<endl;
 }
}
bool isEmpty(){
  return top==-1;
}
void isSize(){
    cout<<"size of stack is"<<" "<<top+1<<endl;
}
};
int main(){
    Stack S(5);
         S.push(10);
      S.push(20);
       S.push(30);
        S.push(40);
         S.push(50);
         S.pop();
         S.peek();
         S.push(60);
         S.push(70);
}