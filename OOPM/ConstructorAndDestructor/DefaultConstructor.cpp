//default constructor 
#include<iostream>
using namespace std;
class Customer{
string name;
int account_number; 
int balance; 
public:
//default constructor
Customer(){
cout<<"default constructor called"<<endl;
}};
int main(){
Customer C1;
}