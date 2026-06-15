// subset sum print
#include<iostream>
using namespace std;
void print(int *arr,int i,int size,int sum){
if(i==size){
cout<<sum<<endl;
return;
}
  print(arr,i+1,size,sum);//exclude
  print(arr,i+1,size,sum+arr[i]); //include
}
int main(){
int arr[]={3,4,5};
int size=sizeof(arr)/sizeof(int);
int i=0;
int sum=0;
print(arr,i,size,sum);
}