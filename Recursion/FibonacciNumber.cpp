// Fibonacci number
#include<iostream>
using namespace std;
int Fibonacci(int n){
if(n<=1){
return n;
}
return Fibonacci(n-1)+Fibonacci(n-2);

}
int main(){
int n;
cout<<"enter Number:";
cin>>n;
int x=Fibonacci(n);
cout<<x;


}