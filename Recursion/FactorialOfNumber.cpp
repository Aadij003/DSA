// to find factorial of a number
#include<iostream>
using namespace std;
int factorial(int n){
if(n==1 || n==0){
return 1;
}
if(n<0){
return -1;
}
int x=n*factorial(n-1);
return x;
}
int main(){
int N;
cout<<"Enter the Number:";
cin>>N;
int fact=factorial(N);
if(fact==-1){
cout<<"factorial of negative numbers isn't possible";
}else{
cout<<fact; 
}
}