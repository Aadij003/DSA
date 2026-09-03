//to find next smaller element 
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

stack<int>S;
int arr[]={7,9,12,10,14,8,3,6,9};
int size= sizeof(arr)/sizeof(int);
vector<int> V(size,-1);
for(int i=0;i<size;i++){
while(!S.empty() && arr[i]<arr[S.top()]){
V[S.top()]=arr[i];
S.pop();

}
S.push(i);
}
for(int i=0;i<size;i++){
cout<<V[i]<<endl;
}
}