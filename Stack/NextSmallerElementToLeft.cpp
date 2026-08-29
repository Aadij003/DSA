//to find next smaller element to left
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

stack<int>S;
int arr[]={4,13,11,5,9,7,8,6};
int size= sizeof(arr)/sizeof(int);
vector<int> V(size,-1);
for(int i=0;i<size;i++){
while(!S.empty() && arr[i]<arr[S.top()]){
S.pop();
}
if(!S.empty()){
V[i]=arr[S.top()];
}
S.push(i);
}
for(int i=0;i<size;i++){
cout<<V[i]<<endl;
}
}