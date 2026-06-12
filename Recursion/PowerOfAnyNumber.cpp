// to find the nth power of any number
#include<iostream> 
using namespace std;
int pow(int n,int N){
if(N==0){
return 1;

}
int power=n*pow(n,N-1);
return power;
}
int main(){
int n,N;
cout<<"enter the number:";
cin>>n;
cout<<"Enter power of"<<n<<":";
cin>>N;
int Power=pow(n,N);
cout<<Power;

}