#include<iostream>
using namespace std;
int main(){
int a=100000;
int *ptr;
ptr=&a;
*ptr=1;
cout<<*ptr;

}