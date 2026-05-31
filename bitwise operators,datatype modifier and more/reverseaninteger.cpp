#include<iostream>
using namespace std;
int main(){
    int n;
    int r;
    cout<<"enter the value of n:";
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        cout<<r<<" ";
    }
    return 0;
}