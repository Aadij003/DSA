#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
cin>>n;
if(n>0 && (n&(n-1))==0){      //        any number which comes in power of 2 must satisfy this condition-->  n & (n-1) = 0
cout<<"n comes in power of two";
}else{
    cout<<"n does not come in power of two";
}

return 0;
}