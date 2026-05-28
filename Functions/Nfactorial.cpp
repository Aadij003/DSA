#include<iostream>
using namespace std;
int factorial(int a){
    int fac=1;
    for(int i=a;i>=1;i--){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
     cout<<"the factorial of"<< " "<<n<<" is:";
     cout<<factorial(n);
    
}