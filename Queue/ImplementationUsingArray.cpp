// queue operations= push(),pop(),empty(),full(),start()
#include<iostream>
using namespace std;
class Queue{
int front,rear;
int *arr;
int size;
public:
Queue(int s){   // s=size
front=-1;
rear=-1;
arr=new int[s];
size=s;
}
bool IsEmpty(){
return front==-1;
}
bool IsFull(){
    return rear==size-1 ;
}
void push(int i){
if(IsEmpty()){
   front=rear=0;
   arr[rear]=i;
}else if(IsFull()){
    cout<<"Queue Overflow";
    return;
}else{
rear=rear+1;
arr[rear]=i;
}
}
void pop(){
    if(IsEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }else { 
        if(front==rear){
        front=rear=-1;
    }else{
front=front+1;
    }
}
}
int start(){
    if(IsEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else{
return arr[front];
}
}
};
int main(){
    Queue Q(5);
    Q.pop();
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    Q.IsEmpty();
    Q.push(80);
}