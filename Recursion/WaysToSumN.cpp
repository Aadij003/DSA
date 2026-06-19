//ways to sum n
#include<iostream>
using namespace std;
int Sum(int *arr,int size,int sum){
if(sum==0){
return 1;
}
if(sum<0){
return 0;
}
int ans=0;
for(int i=0;i<size;i++){
ans=ans+Sum(arr,size,sum-arr[i]);
}
return ans;
}
int main(){
int arr[]={1,4,6};
int sum=7;
int size=sizeof(arr)/sizeof(int);
cout<<Sum(arr,size,sum);

}