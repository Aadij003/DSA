#include<iostream>
using namespace std;
int primeornot(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime number";
    }else{
    cout<<"Not Prime";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    primeornot(n);
}