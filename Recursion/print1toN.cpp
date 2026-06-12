//To print from 1 to N using recursion
#include<iostream>
using namespace std;
void print(int a,int n){
if(a==n){
cout<<a;
return;
}
cout<<a<<endl;
print(a+1,n);
}
int main(){
int i,N;
 i=1;
cout<<"Enter value of N:";
cin>>N;
print(i,N);
}