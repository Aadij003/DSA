//to reverse a string
#include<iostream>
using namespace std;
void display(string S, int i,int size){
if(i==size){
return;
}
cout<<S[i]<<" ";
display(S,i+1, size);
}
void Reverse(string &S,int front,int rear){
if(front<rear){
Reverse(S, front+1, rear-1);
swap(S[front],S[rear]);
}
}
int main(){
string S="ABCDEF";
int size=S.size();
int i=0;
int front=0;
int rear= size-1;
Reverse(S, front, rear);
display(S,i,size);
}