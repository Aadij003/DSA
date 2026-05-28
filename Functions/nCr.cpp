#include<iostream>
using namespace std;
int factorial(int x){
    int fac=1;
    for(int i=1;i<=x;i++){
        fac=fac*i;
    }
return fac;
}
int main(){
int n,r;
cout<<"enter n:";
cin>>n;
cout<<"enter r:";
cin>>r;
int nfact=factorial(n);
int rfact=factorial(r);
int nrfact=factorial(n-r);
int nCr=nfact/(rfact*nrfact);
cout<<"nCr=";
cout<<nCr;
}