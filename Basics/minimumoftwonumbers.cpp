#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"enter two integers:";
  cin>>a>>b;
  if(a<b){
    cout<<a<<" is minimum";
  }else{
   cout<<b<<" is minimum";
  }
  return 0;
}