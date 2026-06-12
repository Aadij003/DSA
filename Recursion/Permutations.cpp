// to print the permutations of given array
#include<iostream>
using namespace std;
void Permutations(int *arr,int index,int size){
if(index==size-1){
for(int i=0;i<=size-1;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return;
}
for(int i=index;i<size;i++){
swap(arr[i],arr[index]);
Permutations(arr,index+1,size);
swap(arr[i],arr[index]);
} 
}
int main(){
int arr[]={1,2,3};
int size=sizeof(arr)/sizeof(int);
int index=0;
Permutations(arr,index,size);
}