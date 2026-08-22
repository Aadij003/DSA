// to find area of the largest rectangle in histogram 
// tried with my method
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
int Area;
stack<int>S;
vector<int> left(9);
vector<int> right(9);
int arr[]={2,3,4,2,6,5,4,5,3};
int size= sizeof(arr)/sizeof(int);
//for right width
for(int i=0;i<size;i++){
while(!S.empty() && arr[i]<arr[S.top()]){
right[S.top()]=i-S.top();
S.pop();
}
S.push(i);
}
//for leftover elements of stack
while(!S.empty()){
right[S.top()]=size-S.top();
S.pop();
}
// now for left width
for(int i=size-1;i>=0;i--){
while(!S.empty() && arr[S.top()]>arr[i]){
left[S.top()]=S.top()-i-1;
S.pop();
}
S.push(i);
}
while(!S.empty()){
left[S.top()]=S.top();
S.pop();
}
//final area calculation
int x=0;
for(int i=0;i<size;i++){
Area=arr[i]*(left[i]+right[i]);
if(Area>x){
x=Area;
}
}
cout<<"Maximum area of a rectangle in histogram is:"<<""<<x;


}