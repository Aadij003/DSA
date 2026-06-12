// permutations 2
#include<iostream>
using namespace std;
void permutations(int *arr,int size,int index){
if(index==size-1){
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
}
vector<int> used(21,0);
for(int i=index;i<size;i++){
if(used[arr[i]+10]==0){
swap(arr[index],arr[i]);
permutations(arr,size,index+1);
swap(arr[index],arr[i]);
used[arr[i]+10]=1;
}
}
}
int main(){
int arr[]={1,1,3};
int size=sizeof(arr)/sizeof(int);
int index=0;
permutations(arr,size,index);

}