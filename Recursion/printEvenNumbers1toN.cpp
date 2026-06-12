// to print even numbers between 1 to N using recursion
#include<iostream> 
using namespace std;
void print(int n){
if(n<=1){
return;
}
print(n-1);
if(n%2==0){
cout<<n<<endl;

}
}
int main(){
int N;
cout<<"enter value of N:";
cin>>N;
print(N);
}