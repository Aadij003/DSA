#include<iostream>
using namespace std;
int main(){
    int x;
    int arr[]={4,8,10,16,88};
    int size=sizeof(arr)/sizeof(int);
    cout<<"enter the number to search:";
    cin>>x;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            cout<<"target found at:"<<""<< i;

            return i;
        }
    }
  cout<<"not found";
}