// Tower of Hanoi
#include<iostream>
using namespace std;
void TOH(int n,char source,char aux,char dest){
if(n==1){
cout<<source<<"->"<<dest<<endl;
return;
}
TOH(n-1,source,dest,aux);
TOH(1,source,aux, dest);
TOH(n-1,aux,source,dest);
}
int main(){
int n;
cout<<"enter n:";
cin>>n;
char source='A';
char aux='B';
char dest='C';
TOH(n,source,aux,dest);
}