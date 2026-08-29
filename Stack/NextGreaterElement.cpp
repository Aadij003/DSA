#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

stack<int>S;
int arr[]={8,6,4,7,4,9,10,8,12};
int size= sizeof(arr)/sizeof(int);
vector<int> V(size,-1);
for(int i=0;i<size;i++){
if(S.empty() && i!=size-1){
S.push(i);
}else if(arr[i]>arr[S.top()]){
V[S.top()]=arr[i];
S.pop();
while(!S.empty() && arr[i] > arr[S.top()]){
if(arr[i]>arr[S.top()]){
V[S.top()]=arr[i];
S.pop();
}
S.push(i);
}
}
else if(i==size-1){
S.push(i);
}
else{
S.push(i);
}
}
for(int i=0;i<size;i++){

cout<<V[i]<<endl;
}



}