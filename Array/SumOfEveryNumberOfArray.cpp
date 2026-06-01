#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,6,4,15,99,75,22};
    int size=sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0;i<size;i++){
sum=sum+arr[i];
    }
    cout<<sum;
}