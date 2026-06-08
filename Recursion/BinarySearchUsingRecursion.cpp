// binary search using recursion
#include<iostream>
using namespace std; 
int Binary_Search(int*arr,int left,int right,int key){
if(left>right){
return -1;
}
int mid=left+(right-left)/2;
if(arr[mid]==key){
return mid;
}
if(key<arr[mid]){
return Binary_Search(arr,left,mid-1,key);
}
if(key>arr[mid]){
return Binary_Search(arr,mid+1,right,key);
}
}
int main(){
int arr[]={3,8,11,15,20,22,40,45};
int size=sizeof(arr)/sizeof(int); 
int key=45;
int left=0;
int right=size-1;
int index=Binary_Search(arr,left,right,key);
if(index>=0){
cout<<"key found at index="<<index;
}else{
cout<<"key not found";
}

}