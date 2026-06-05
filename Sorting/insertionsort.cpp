#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter size of array:";
cin>>size;
int a[size];
cout<<"enter elements of array:";
for(int i=0;i<size;i++){
    cin>>a[i];
}
// insertion sort
for(int i=1;i<size;i++){
    for(int j=i;j>0;j--){
        if(a[j]<a[j-1]){
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }else{
            break;
        }
    }
}
cout<<"sorted array is :";
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
}