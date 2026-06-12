//perfect sum
#include<iostream>
using namespace std;
int Subset(int* arr,int size,int sum,int index){
if(index==size){
return sum==0;
}
return Subset(arr,size,sum,index+1)+Subset(arr,size,sum-arr[index],index+1);

}
int main(){
int arr[]={3,4,5,1};
int size=4;
int sum=4;
int index=0;
int count=Subset(arr,size,sum,index);
cout<<count;
}