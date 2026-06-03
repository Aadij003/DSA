#include<iostream>
using namespace std;
void change(int *x){
    *x=100;
}
int main(){
    int a=10;
    cout<<"previously value of a is:"<<a<<endl; 
    change(&a);
cout<<"now value of a becomes:"<<a<<endl;
}