#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,6};
    int size=sizeof(arr)/sizeof(int);
    int product=1;
    for(int i=0;i<size;i++){
product=product*arr[i];
    }
    cout<<product;
}