#include<iostream>
using namespace std;
int main(){
    int arr[]={10,36,75,85,-15};
    int size=sizeof(arr)/sizeof(int);
    int largest= arr[0];
    for(int i=0;i<size;i++){
if(largest<arr[i]){
    largest=i;
}
    }
    cout<<largest;
}