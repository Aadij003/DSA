#include<iostream>
#include<queue>
using namespace std;
class Stack{
    queue<int> Q1;
    queue<int> Q2;
    public:
    bool empty(){
        return Q1.empty() && Q2.empty();
    }
    void push(int i){
        if(empty()){
            Q1.push(i);
        }else if(Q1.empty()){
            Q2.push(i);
        }else{
            Q1.push(i);
        }
    }
    int pop(){
        if(empty()){
            cout<<"Stack is empty";
            return 0;
        }else if(Q1.empty()){
            while(Q2.size()>1){
                Q1.push(Q2.front());
                Q2.pop();
            }
            int element= Q2.front();
            Q2.pop();
            return element;
        }else{
            while(Q1.size()>1){
                Q2.push(Q1.front());
                Q1.pop();
            }
            int element=Q1.front();
            Q1.pop();
            return element;
        }
    }
    int top(){
        if(empty()){
            cout<<"Queue is empty";
            return 0;
        }else if(Q1.empty()){
            return Q2.back();
        }else{
            return Q1.back();
        }
    }
};
int main(){
    Stack S;
    S.push(10);
    S.push(20);
    int x=S.top();
       cout<<"top element is"<<" "<<x<<endl;
       S.pop();
       S.pop();
       S.pop();
}