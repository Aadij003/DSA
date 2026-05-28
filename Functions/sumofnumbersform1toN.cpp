#include<iostream>
using namespace std;
int sumof2num(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
sum=sum+i;}
return sum;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    sumof2num(n);
    cout<<"sum of numbers is:"<<sumof2num(n);
}