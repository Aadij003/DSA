//Stock Span
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

stack<int>S;
int arr[]={100,80,55,70,60,75,85};
int size= sizeof(arr)/sizeof(int);
vector<int> V(size,1);
for(int i=size-1;i>=0;i--){
while(!S.empty() && arr[i]>arr[S.top()]){
V[S.top()]=S.top()-i;
S.pop();
}

    S.push(i);}
while(!S.empty()){
V[S.top()]=S.top()+1;
S.pop();

}
for(int i=0;i<size;i++){
cout<<V[i]<<endl;
}
}