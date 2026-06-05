//Quick Sort
#include<iostream>
using namespace std; 
void display(int* arr,int size){
cout<<"Sorted array is:";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
}
int Partition(int *arr, int front, int end){
    int pivot = arr[end];
    int x = front;

    for(int i = front; i < end; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[x]);
            x++;
        }
    }

    swap(arr[x], arr[end]);  // final pivot placement
    return x;
}
void Quick_Sort(int *arr,int front,int end){
if(front>=end){
return;
}
int pivot=Partition(arr,front,end);
Quick_Sort(arr, front, pivot - 1); //left partition
Quick_Sort(arr, pivot + 1, end); //right partition
}
int main(){
int arr[]={6,2,5,1,4,2};
int size=sizeof(arr)/sizeof(int);
int start=0;
int end=size-1;
cout<<"Initial array is:";
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
Quick_Sort(arr,start,end);
display(arr,size);

}