// Minimum element of array
#include<iostream>
using namespace std;
int Index( int* arr,int i,int size,int min_Index) { // return index of minimum element of array
if(i==size-1){
return min_Index;
}
if(arr[min_Index]>arr[i+1]){
min_Index=i+1;
}
return Index(arr,i+1,size,min_Index);
}
int main(){
int arr[]={7,2,4,1,6};
int size=sizeof(arr)/sizeof(int);
int i=0;
int m=0;
int n=Index(arr,i,size,m);
cout<<"Minimum element of the array is:"<<" "<<arr[n];


}