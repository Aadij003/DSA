#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front,rear;
    int size;
    public:
    Queue(int s){
front=rear=-1;
arr= new int[s];
size=s;
    }
    bool IsEmpty(){
return front==-1;
    }
    bool IsFull(){
        return (rear+1)%size==front;
    }
    void push(int i){
if(IsEmpty()){
    front=rear=0;
    arr[rear]=i;
}else if(IsFull()){
    cout<<"Queue Overflow"<<endl;
    return;
}else{
rear=(rear+1)%size;
arr[rear]=i;
    }
}
void pop(){
    if(IsEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    else{
        if(front==rear){
            front=rear=-1;
        }else{
        front=(front+1)%size;
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
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    // Q.push(60);  //queue overflow
   int x= Q.start();
   if(!Q.IsEmpty()){
cout<<x<<endl;
   }

}