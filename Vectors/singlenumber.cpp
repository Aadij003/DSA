#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={4,1,2,1,2};
    int n=0;
    for(int i:a){
    n=n^i;
  }
    cout<<n;
}