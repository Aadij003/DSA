#include<iostream>
using namespace std;
int main(){
    int arr[]={10,30,46,2,99};     
    int size=sizeof(arr)/sizeof(int);
    int max=0;
    int min=0;
for(int i=0;i<size;i++){
    if(arr[max]<arr[i]){
        max=i;
    }
}
for(int i=0;i<size;i++){
    if(arr[min]>arr[i]){
        min=i;
    }
}
swap(arr[max],arr[min]);
for(int i=0;i<size;i++)
cout<<arr[i]<<" ";
}


