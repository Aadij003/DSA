// linerar search using recursion
#include<iostream>
using namespace std;
int Search(int* arr,int x,int size, int i){
if(i==size){
return -1; 
}
if(arr[i]==x){
return i;
}
int check=Search(arr,x,size,i+1);
return check;
}
int main(){
int arr[]={2,4,7,3,11,8,12};
int key=8;
int size=sizeof(arr)/sizeof(int);
int i=0;
int a=Search(arr,key,size,i);
cout<<"element found at index:"<<" "<<a; 
}