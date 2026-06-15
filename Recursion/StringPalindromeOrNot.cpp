// to check whether string is palindrome or not
#include<iostream>
using namespace std;
int Palindrome(string N,int front,int rear){
if(front==rear || front>rear ){
return 1;
}
if(N[front]!=N[rear]){
return 0;
}
int c=Palindrome(N,front+1,rear-1);
return c;
}
int main(){
string S="532235";
int size=S.size();
int front=0,rear=size-1;
int check=Palindrome(S,front,rear);
if(check==1){
cout<<"Palindrome";
}else{
cout<<"Not Palindrome";
}
}