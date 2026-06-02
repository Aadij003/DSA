#include<iostream>
#include<vector>
using namespace std;
int reverseFunction(vector<int>&x){
    int size=x.size();
    int start=0;
    int end=size-1;
   while(start<end){
        if(start<end){
            swap(x[start],x[end]);
            start++;
            end--;
        }
    }
 
}
int main(){
    vector<int> a={1,2,3,4,5};
    reverseFunction(a);
    for(int i: a)
    cout<<i<<" ";
}