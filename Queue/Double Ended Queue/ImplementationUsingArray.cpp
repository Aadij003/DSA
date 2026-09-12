#include<iostream>
using namespace std;
class Dqueue{
    int *arr;
    int front,rear,size;
    public:
    Dqueue(int s){
        arr=new int [s];
        front=rear=-1;
        size=s;
 }
 bool IsEmpty(){
    return front==-1;
 }
 bool IsFull(){
    return (rear+1)%size==front;
 }
 void push_front(int i){
    if(IsEmpty()){
front=rear=0;
arr[front]=i;
return;
    }else if(IsFull()){
        return;
    }else{
        front=(front-1+size)%size;
        arr[front]=i;
        return;
    }
 }
 void push_back(int i){
if(IsEmpty()){
    front=rear=0;
    arr[front]=i;
}else if(IsFull()){
    return;
}else{
    rear=(rear+1)%size;
    arr[rear]=i;
    return;
}
 }
 void pop_front(){
    if(IsEmpty()){
        return;
    }else{
        if(front==rear){
            front=rear=-1;
        }else{
    front=(front+1)%size;
    }
}
 }
 void pop_back(){
    if(IsEmpty()){
        return;
    }else if(front==rear){
        front=rear=-1;
        return;
    }else{
        rear=(rear-1+size)%size;
    }
 }
};
int main(){
    Dqueue DQ(5);
    DQ.push_front(10);
     DQ.push_front(20);
      DQ.push_front(30);
       DQ.push_front(40);
        DQ.push_front(50);
}