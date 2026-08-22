#include<iostream>
#include<stack>
using namespace std;
int main(){
    int b;  //bottom element
    stack<int> A;
    int n;
    cout<<"enter size of stack:";
    cin>>n;
    cout<<"enter elements in stack:";
    int x;  // x is used to insert elements inside stack 
    for(int i=0;i<n;i++){
        cin>>x;
A.push(x);
    }
    stack<int> B;
    while(!A.empty()){
        B.push(A.top());
        A.pop();
    }
    cout<<"enter the bottom element to insert in stack"<<endl;
  cin>>b;
  A.push(b);
 while(!B.empty()){
    A.push(B.top());
    B.pop();
  }
  cout<<"updated stack becomes:";
  while(!A.empty()){
    cout<<A.top()<<endl;
    A.pop();
  }
}