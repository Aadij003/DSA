// Greatest common divisor of two numbers by eucledian algorithm 
#include<iostream>
using namespace std;
int GCD(int a,int b){
if(b==0){
return a;
}
return GCD(b,a%b);


}
int main(){
int a,b;
cout<<"Enter two numbers:"<<endl;
cin>>a>>b;
cout<<GCD(a,b);
}