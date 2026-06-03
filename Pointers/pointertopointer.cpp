#include<iostream>
using namespace std;
int main(){
    int a=100;
    // cout<<a<<endl;
    cout<<*(&a)<<endl;
    int *p1=&a;
    *p1=10;
    cout<<*p1<<endl;
    int **p2=&p1;
    **p2=150;
    cout<<**p2;

}