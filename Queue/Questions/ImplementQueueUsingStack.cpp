#include<iostream>
#include<stack>
using namespace std;
class Queue{
stack<int> S1;
stack<int> S2;
public:
bool IsEmpty(){
    return S1.empty() && S2.empty();
}
void push(int i){
    S1.push(i);
}
int pop(){
    if(IsEmpty()){
        cout<<"Queue is empty";
        return -1;
    }if(!S2.empty()){
        int element=S2.top();
        S2.pop();
        return element;
    }else{
        while(!S1.empty()){
            S2.push(S1.top());
            S1.pop();
        }
        int element=S2.top();
        S2.pop();
        return element;
    }
}
int peek(){
    if(IsEmpty()){
        cout<<"Queue is empty";
        return -1;
    
    }if(!S2.empty()){
        return S2.top();
    }else{
        while(!S1.empty()){
            S2.push(S1.top());
            S1.pop();
        }
    }
    return S2.top();
}
};
int main(){
    Queue Q;
    Q.push(10);
    Q.pop();
    Q.pop();
}