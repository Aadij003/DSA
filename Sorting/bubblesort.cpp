#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter size of array:";
cin>>size;
cout<<"enter unsorted elements of array:";
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for( int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           
        }
    }
}
cout<<"sorted array is:";
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
}