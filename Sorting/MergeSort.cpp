//Merge Sort
#include<iostream>
#include<vector>
using namespace std;
void Sorting(int arr[],int left,int right,int mid){
int i=left,j=mid+1;
int left_original=left;
vector<int> V(right-left+1);
int k=0;
while(i <= mid && j <= right){
if(arr[i] <= arr[j]){
    V[k] = arr[i];
    i++;
} else {
    V[k] = arr[j];
    j++;
}
k++;
}
while(i<=mid){
V[k]=arr[i];
i=i+1;
k=k+1;
}
while(j<=right){
V[k]=arr[j];
j=j+1;
k=k+1;
}
for(int x=0;x<V.size();x++){
arr[left_original+x]=V[x];
}
}

void Merge_Sort(int *arr,int left,int right){
if(left==right){
return;
}
 int mid=left+(right-left)/2;
 Merge_Sort(arr,left,mid);// left subarray 
 Merge_Sort(arr,mid+1,right);// right subarray 
Sorting(arr,left,right,mid);
}


int main(){
int arr[]={5,7,2,1,4,3};
int size=sizeof(arr)/sizeof(int);
int left=0, right=size-1;
cout<<"Original Array is:"<<" ";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
Merge_Sort(arr,left,right);
cout<<"Sorted Array is:"<<" ";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}


}