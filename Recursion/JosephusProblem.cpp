//Josephus problem
#include<iostream>
#include<vector>
using namespace std;
int Winner(vector<bool>& arr,int k,int index,int count){
if(count==1){
for(int i=0;i<arr.size();i++){
if(arr[i]==0)
return i;
}
}
int kill=(k-1)%count;
while(kill--){
index=(index+1)%arr.size();
while(arr[index]==1){
index=(index+1)%arr.size();
}
}
arr[index]=1;
while(arr[index]==1){
index=(index+1)%arr.size();
}
return Winner(arr,k,index,count-1);
}

int main(){
int n,k;
cout<<"enter n and k:";
cin>>n>>k;
vector<bool>V(n,0);
int index=0;
int count=V.size();
int W=Winner(V,k,index,count);
cout<<W;
}