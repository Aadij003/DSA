// target sum with repetition
#include<iostream>
using namespace std; 
int Sum(int *arr,int index,int size,int sum){
if(sum==0){
return 1;
}
if(sum<0 || index==size){
return 0;
}
return Sum(arr,index,size,sum-arr[index])+Sum(arr,index+1,size,sum);
}
int main(){
int arr[]={3,4,1,6};
int index=0;
int size=4;
int sum=4;
int count=Sum(arr,index,size,sum);
cout<<count;
}