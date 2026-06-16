// sum of elements of array
#include<iostream>
using namespace std;
int Sum(int *arr,int i,int size){
if(i==size-1){
return arr[i];
}
return arr[i]+Sum(arr,i+1,size);
}
int main(){
int arr[]={3,4,5,8,2};
int size=sizeof(arr)/sizeof(int);
int i=0;
int sum=Sum(arr,i,size);
cout<<"Sum of elements of given array is:"<<" "<<sum;
}