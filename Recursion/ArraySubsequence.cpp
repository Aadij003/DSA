//array subsequence print
#include<iostream>
#include<vector>
using namespace std; 
void Subsequence(int *arr,vector<int> &temp,int i,int size){
if(i==size){
cout<<"{ ";
for(int i=0;i<temp.size();i++){
cout<<temp[i]<<" ";
}
cout<<"}"<<endl;
return;
}
temp.push_back(arr[i]);
Subsequence(arr,temp,i+1,size);

temp.pop_back();
Subsequence(arr,temp,i+1,size);
}
int main(){
int arr[]={1,2,3};
vector<int> temp;
int i=0;
int size=sizeof(arr)/sizeof(int);
Subsequence(arr,temp,i,size);
}