// target sum
#include<iostream>
using namespace std;
bool check(int *arr,int size,int target,int i){
if(target==0){
return 1;
}
if(target<0 || i==size){
return 0;
}
return check(arr,size,target-arr[i],i+1) || check(arr,size,target,i+1);
}
int main(){
int arr[]={3,7,8,10,9,2};
int size=sizeof(arr)/sizeof(int);
int target=9;
int i=0;
int x=check(arr,size,target,i);
cout<<x;
}