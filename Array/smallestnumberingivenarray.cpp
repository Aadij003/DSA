#include<iostream>
using namespace std;
int main(){
    int arr[]={100,90,36,75,-15};
    int size=sizeof(arr)/sizeof(int);
    int smallest= arr[0];
    for(int i=0;i<size;i++){
if(smallest>arr[i]){
    smallest=arr[i];
}
    }
    cout<<smallest;
}