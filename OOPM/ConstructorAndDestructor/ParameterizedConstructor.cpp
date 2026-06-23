//parameterized constructor
#include<iostream>
using namespace std;
class Customer{
string name;
int account_number; 
int balance; 
public:
//parameterized constructor
Customer(string name, int account_number, int balance){
this->name=name;
this->account_number=account_number;
this->balance=balance;
}
};
int main(){
string n;
int Acc;
int balance;
cin>>n>>Acc>>balance;
Customer C1(n,Acc,balance);
}