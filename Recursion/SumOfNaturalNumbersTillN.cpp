// Find sum of Natural number till given value N
#include<iostream>
using namespace std;
int Sum(int N){
int x=0;
if(N==1){
return 1;
}
x=N+Sum(N-1);
return x;
}
int main(){
int N,sum=0;
cout<<"Enter value of N:";
cin>>N;
sum=Sum(N);
cout<<sum;

}