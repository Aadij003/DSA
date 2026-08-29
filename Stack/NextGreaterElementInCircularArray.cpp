//to find next greater element and circular traversal 1 time
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

stack<int>S;
int arr[]={6,10,7,4,8,9,4};
int size= sizeof(arr)/sizeof(int);
vector<int> V(size,-1);
for(int i=0;i<2*(size)-1;i++){
int index=i%size;
while(!S.empty() && arr[index]>arr[S.top()]){
V[S.top()]=arr[index];
S.pop();
}
if(i < size){
    S.push(index);
}
}
for(int i=0;i<size;i++){
cout<<V[i]<<endl;
}
}