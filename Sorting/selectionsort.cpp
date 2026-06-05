#include<iostream>
using namespace std;
int main(){
    int n;
    int x;
    cout<<"enter size of array:";
    cin>>n; 
    int arr[n];
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;

            }}
             x=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=x;
        }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}