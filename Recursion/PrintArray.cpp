// Print array
#include<iostream>
using namespace std;
void Print(int *arr,int size,int i){
if(i==size-1){
cout<<arr[i];
return;
}cout<<arr[i]<<endl;
Print(arr,size,i+1);
return;
}
int main(){
int arr[]={3,7,6,2,8};
int size=sizeof(arr)/sizeof(int);
int i=0;
Print(arr,size,i);

}